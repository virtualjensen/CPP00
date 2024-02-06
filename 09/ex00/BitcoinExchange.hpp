
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <list>
#include <exception>
#include <limits>
#include <cctype>
#include <cstdlib>

std::map<size_t, std::string> split(std::string str, char sep);

class BitcoinExchange
{
	private:

		std::map<std::string, double> _db;
		std::map<size_t, std::string> _dateList;

		void storeDB(std::string fileName,
			std::map<std::string, double>& db,
			char dateSep);
		
        bool isLeapYear(int year);
		bool isBadDate(std::string date);
		double getDateVal(std::string date);
		
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& src);
		BitcoinExchange& operator=(const BitcoinExchange& src);
		~BitcoinExchange();

		void calculate(std::string fileName, char dateSep);

		
};

#endif