/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:26:36 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/06 19:32:24 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) {

    this->_name = name;
}

HumanB::~HumanB() {
    
}

void HumanB::attack(void) const{

    if (this->_weapon == NULL)
        std::cout << this->_name << " cannot attack " << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType()<< std::endl;
}

void HumanB::setWeapon(Weapon const &weapon) {
    
    this->_weapon = &weapon;
}