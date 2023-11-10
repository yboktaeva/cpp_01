/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:07:15 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/30 17:09:41 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceIt.hpp"

int main(int argc, char **argv) {

    std::string line;
    std::string newLine;
    
    if (argc != 4) {
            
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    if (std::string(argv[2]).empty()) {

        std::cout << "Error: s1 is empty" << std::endl;
        return 1;
    }
    else if (std::string(argv[3]).empty()) {

        std::cout << "Error: s2 is empty" << std::endl;
        return 1;
    }
    std::ifstream ifs(argv[1]);
    if (!ifs.is_open()) {
        std::cout << "Error: Cannot open file for read or file does not exist" << std::endl;
        return 1;
    }
    while (std::getline(ifs, line)) {
        
        newLine += ReplaceIt::replace(line, argv[2], argv[3]);
        if (!newLine.empty()) {
            
            if (!ifs.eof())
                newLine += "\n";
        }
    }
    ifs.close();
    
    if (newLine.empty()) {
        
        std::cout << "In \"" << argv[1] << "\" no match found with \"" << argv[2] << "\"" << std::endl;
        return 1;
    }
    std::string outFile = std::string(argv[1]) + ".replace";
    std::ofstream ofs(outFile.c_str());
    if (!ofs) {
    
        std::cout << "Error: cannot open file for write" << std::endl;
        return 1;
    }
    ofs << newLine;
    ofs.close();
    return 0;
}