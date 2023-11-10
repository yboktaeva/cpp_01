/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceIt.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:07:45 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 11:59:59 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceIt.hpp"

ReplaceIt::ReplaceIt() {
    
}

ReplaceIt::~ReplaceIt() {
    
}

std::string ReplaceIt::replace(std::string line, std::string s1, std::string s2) {

    std::string newStr;

    std::size_t i = 0;
    int start = 0;
    int begin = 0;
    
    while (i < line.length()) {

        if ((start = line.find(s1, start)) != -1) {

            newStr += line.substr(begin, start - begin) + s2;
            start += s1.length();
            begin = start;
        }
        else {

            if (begin != 0)
                newStr += line.substr(begin);
            break ;
        }
        ++i;
    }
    return newStr;
}