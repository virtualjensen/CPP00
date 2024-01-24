#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#define DATA_FILE "data.csv"

#include <map>
#include <sstream>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

class BitcoinExchange{
    private:
        bool    isLeapYear(int year);
        void    storeDB();
        std::map<std::string, double> _db;
        std::ifstream _dbFile;
        std::ifstream _input;
    public:
        BitcoinExchange();
        BitcoinExchange(const std::string &file);
        BitcoinExchange(const BitcoinExchange&);
        BitcoinExchange &operator=(const BitcoinExchange&);
        ~BitcoinExchange();
        void    run();

        
};

#endif