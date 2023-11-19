/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:00:10 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/19 16:49:56 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av){
    if (ac != 4){
        std::cerr << "Incorrect input." << std::endl;
        return (1);
    }
    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string outFileName = fileName + ".replace";

    std::ifstream inFile(fileName.c_str());
    if (!inFile){
        std::cerr << "Error with opening infile" << std::endl;
        return (1);
    }
    std::ofstream outFile(outFileName.c_str());
    if (!outFile){
        std::cerr << "Error with creating outfile" << std::endl;
        return (1);
    }

}