#include "BitcoinExchange.hpp"

double _stod(std::string s)
{
	std::stringstream ss(s);
	double i;

	ss >> i;
	return i;
}


std::map<size_t, std::string> split(std::string str, char sep)
{
	std::map<size_t, std::string> dateMap;
	std::stringstream ss(str);
	std::string buff;
	int i = 0;

	while (std::getline(ss, buff, sep))
		dateMap[i++] = buff;
	return dateMap;
}

static bool isInt(const std::string& s)
{
	for (size_t i = 0; i < s.length(); i++)
	{
		if (!std::isdigit(s[i]))
			return (false);
	}
	return (true);
}

static bool isFloat(const std::string& s)
{
	if (s.find_first_not_of("0123456789.") != std::string::npos)
		return false;
	if (s.find_first_of(".") != s.find_last_of("."))
		return false;
	return true;
}

BitcoinExchange::BitcoinExchange()
{
	storeDB("data.csv", this->_db, ',');	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
	*this = src;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	if (this == &src)
		return *this;
	this->_db = src._db;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::storeDB(std::string fileName,
	std::map<std::string, double>& db,
	char dateSep)
{
	bool isFirst = true;
	std::fstream file(std::string(fileName).c_str(), std::fstream::in);
	std::stringstream stream;
	std::string buff;

	if (file.fail())
		throw std::runtime_error("Error: could not open file.");

	stream << file.rdbuf();
	while (std::getline(stream, buff))
	{
		if ((buff.length() == 0) || isFirst)
		{
			isFirst = false;
			continue;
		}
		std::size_t sep = buff.find(dateSep);
		std::string dateString = buff.substr(0, sep);
		std::string valueString = buff.substr(sep + 1);
		if ((dateString.length() == 0) || (valueString.length() == 0) || !isFloat(valueString))
			throw std::runtime_error("Error: could not open file.");
		db[dateString] = _stod(valueString);
	}
}

static std::string	stripSpace(std::string tmp, int flag){
	std::string ret;
	bool inBetween = false; // flag to indicate if we are in-between non-white space characters
    for (size_t i = 0; i < tmp.length(); i++) {
        if (flag == 1) {
            if (!std::isspace(tmp[i]) || inBetween) {
                ret += tmp[i];
                if (!std::isspace(tmp[i])) // If non-white space, set inBetween flag
                    inBetween = true;
            }
        } else if (flag == 2 && (!std::isspace(tmp[i]) && tmp[i] != '|')) {
            ret += tmp[i];
            inBetween = true; // If non-white space or not '|' character, set inBetween flag
        }
    }
	return ret;
}


void BitcoinExchange::calculate(std::string fileName,
	char dateSep)
{
	bool isFirst = true;
	std::fstream file(std::string(fileName).c_str(), std::fstream::in);
	std::stringstream stream;
	std::string buff;

	if (file.fail())
		throw std::runtime_error("Error: could not open file.");

	stream << file.rdbuf();
	while (std::getline(stream, buff))
	{
		if ((buff.length() == 0) || isFirst)
		{
			isFirst = false;
			continue;
		}

		std::size_t sep = buff.find(dateSep);

		if (sep == std::string::npos || (buff.find_first_of(dateSep) != buff.find_last_of(dateSep)))
		{
			std::cout <<  "Error: bad input => " + buff << "\n";
			continue ;
		}

		if (buff.length() == 0)
			continue;


		std::string tmpDate = buff.substr(0, sep);
		std::string dateString = stripSpace(tmpDate, 2);


		std::string tmpVal = buff.substr(sep + 1);
		std::string valueString = stripSpace(tmpVal, 1); // removes space and only gets the number in the string

		_dateList = split(dateString, '\n');
		double val = ( _stod(valueString) );
		if (isBadDate(dateString) || dateString.length() == 0 || valueString.length() == 0)
			std::cout << "Error: bad input => " << dateString << "\n";
		else if ((val < 0) || !isFloat(valueString))
			std::cout <<  "Error: not a positive number.\n";
		else if (val > 1000)
			std::cout << "Error: too large a number.\n";
		else
		{
			std::cout << dateString << " => " << valueString << " = " <<
				(val * getDateVal(dateString)) << "\n";
		}
	}
}

bool    BitcoinExchange::isLeapYear(int year){
	return (!(year % 400) || (!(year % 4) && (year % 100)));
}

bool BitcoinExchange::isBadDate(std::string date) {
	std::map<size_t, std::string> x = split(date, '-');
	std::string year = x[0];
	std::string month = x[1];
	std::string day = x[2];
	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
		return true;
	if (!isInt(year) || !isInt(month) || !isInt(day))
		return true;
	int y = atol(year.c_str());
	int m = atoi(month.c_str());
	int d = atoi(day.c_str());

	if ((m > 12) || (d > 31))
		return true;
	if (!isLeapYear(y) && m == 2 && d > 28)
		return true;
	else if (isLeapYear(y) && m == 2 && d > 29)
		return true;
	
    if ((m == 4 || m == 6 || m == 9 || m == 11) && (d > 30)){
        return true;
	}
	return false ;
}

double BitcoinExchange::getDateVal(std::string date)
{
	std::map<std::string, double>::iterator it =  _db.lower_bound(date);
	if (it == _db.end()){
		it--;
		_db[it->first] = it->second;
	}
	else if (it != _db.begin() && it->first != date)
		--it;
	double val = ((*it).second);
	return val;
}
