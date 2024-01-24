#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &file) {
    this->_input.open(file.c_str());
    if (!this->_input.is_open()){
        std::cout << "Error in opening input file" << std::endl;
        return ;
    }
    this->_dbFile.open(DATA_FILE);
    if (!this->_dbFile.is_open()){
        std::cerr << "Error in opening Database file" << std::endl;
        return ; // fix error
    }
    if(this->_dbFile.fail()){
        std::cerr << "Database permission denied" << std::endl;
        return ;
    }
    storeDB();
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& og){
    *this = og;
    return *this;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& og){
    *this = og;
}

BitcoinExchange::~BitcoinExchange() {}

bool    BitcoinExchange::isLeapYear(int year){
    if ((year % 400 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true ;
    return false ;
}

void BitcoinExchange::storeDB()
{
    std::string buf;
    std::string key;
    std::string val;

    while (getline(this->_dbFile, buf))
    {
        if (buf == "date,exchange_rate")
            continue;
        std::stringstream stream(buf);
        std::getline(stream, key, ',');
        std::getline(stream, val, ',');
        
        std::stringstream streamval(val);
        double converted_val;

        streamval >> converted_val;
        if (streamval.fail() == true)
            throw std::runtime_error("Conversion Failed in DB");

        this->_db.insert(std::pair< std::string, double >(key, converted_val));
    }
}

void BitcoinExchange::run()
{
    std::string buf = "";
    std::string key = "";
    std::string val = "";

    std::getline(this->_input, buf);

    if (buf != "date | value")
    {
        throw std::runtime_error("file empty or incorrect format error");
    }

    while(std::getline(this->_input, buf))
    {
        if (buf.find_first_of('|') != buf.find_last_of('|')
            || buf.find_first_of('.') != buf.find_last_of('.'))
        {
            std::cout << "Error: bad input" << " " << buf << std::endl;
            continue;
        }

        std::stringstream stream(buf);
        std::getline(stream, key, '|');
        std::getline(stream, val, '|');

        // space strip.
        size_t find = 0;

        while (find != std::string::npos)
        {
            find = key.find_first_of(' ');
            if (find != std::string::npos)
                key.erase(find, 1);
        }

        find = 0;

        while (find != std::string::npos)
        {
            find = val.find_first_of(' ');
            if (find != std::string::npos)
                val.erase(find, 1);
        }

        std::stringstream streamval(val);
        double converted_val;

        streamval >> converted_val;
        if (streamval.fail() == true)
        {
            std::cout << "Error: Conversion failed" << std::endl;
            continue;
        }

        if (converted_val < 0)
        {
            std::cout << "Error: not a positive number" << std::endl;
            continue;
        }

        if (converted_val > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }

		if (val.empty() == true || key.empty() == true)
		{
			std::cout << "Error: bad input" << " " << buf << std::endl;
            continue;
		}

        for (int i = 0; i < (int)key.size(); i++)
        {
            if (isdigit(key[i]) == false && key[i] != '-' && key[i] != ' ')
            {
                std::cout << "date format incorrect!" << std::endl;
                continue;
            }
        }

        const char * date_str = key.c_str();

        struct tm time_struct;

        if (strptime(date_str, "%Y-%m-%d", &time_struct) != NULL)
        {
            for (int i = 0; i < (int)val.size(); i++)
            {
                if (isdigit(val[i]) == false && val[i] != '.' && val[i] != ' ')
                {
                    std::cout << "val format incorrect!" << std::endl;
                    continue;
                }
            }

            std::map<std::string, double>::iterator it = this->_db.lower_bound(key);
            if (it->first != key)
            {
                if (it != this->_db.begin())
                    it--;
            }

            double sol = it->second * converted_val;

            std::cout << key << " => " << val << " = " << sol << std::endl;
        }
        else
        {
            std::cout << "Date is not correctly formatted." << std::endl;
        }
    }
}