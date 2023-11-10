/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:22:34 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 18:11:45 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

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
    
    int levelIndex = -1;
    for (int i = 0; i < 4; i++) {

        if (level == funName[i]) {
            
            levelIndex = i;
            break;
        }
    }
    switch(levelIndex) {
        
        case 0: std::cout << "[ DEBUG ]" << std::endl;
            (this->*funPtr[0])();
            std::cout << '\n';
        case 1: std::cout << "[ INFO ]" << std::endl;
            (this->*funPtr[1])();
            std::cout << '\n';
        case 2: std::cout << "[ WARNING ]" << std::endl;
            (this->*funPtr[2])();
            std::cout << '\n';
        case 3: std::cout << "[ ERROR ]" << std::endl;
            (this->*funPtr[3])();
            std::cout << '\n';
            break;
        default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
    } 
}
