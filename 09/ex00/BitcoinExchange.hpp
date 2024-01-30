
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

std::list<std::string> split(std::string str, char sep);

class BitcoinExchange
{
	private:

		std::map<std::string, double> _db;

		void storeDB(std::string fileName,
			std::map<std::string, double>& db,
			char dateSep);
		
        bool isLeapYear(int year);
		bool isBadDate(std::list<std::string> dateList);
		double findNearsetDate(std::string date);
		
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& src);
		BitcoinExchange& operator=(const BitcoinExchange& src);
		~BitcoinExchange();

		void calculate(std::string fileName, char dateSep);

		
};

#endif