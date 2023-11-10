/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:26:06 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 15:07:07 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <vector>

Harl::Harl() {
    
}

Harl::~Harl() {
    
}

void Harl::debug() {
    
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
    "I really do !" << std::endl;
}

void Harl::info() {
    
    std::cout << "I cannot believe adding extra bacon costs more money. "
    "You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning() {
    
    std::cout << "I think I deserve to have some extra bacon for free. " 
    "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {

    void (Harl::*funPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string funName[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    bool isValidLevel = false;

    for (int i = 0; i < 4; ++i) {

        if (level == funName[i]) {
            
            (this->*funPtr[i])();
            isValidLevel = true;
            break;
        }
    }
    if (!isValidLevel)
        std::cout << "Invalid level: " << level << std::endl;
}