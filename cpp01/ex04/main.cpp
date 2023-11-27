/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:00:10 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/20 03:17:42 by jebucoy          ###   ########.fr       */
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
    std::string contents;
    size_t pos;

    std::ifstream inFile(fileName.c_str());
    if (s1 == s2){
        std::cerr << "Error: Whats the point?" << std::endl;
        return (1);
    }
    if (!inFile){
        std::cerr << "Error with opening infile" << std::endl;
        return (1);
    }
    std::ofstream outFile((fileName + ".replace").c_str());
    if (!outFile){
        std::cerr << "Error with creating outfile" << std::endl;
        return (1);
    }
    while(std::getline(inFile, contents)){
        do{
            pos = contents.find(s1);
            if (pos != std::string::npos){
                contents.erase(pos, s1.length());
                contents.insert(pos, s2);
            }
        } while (pos != std::string::npos);
        outFile << contents << std::endl;
    }
    inFile.close();
    outFile.close();
}