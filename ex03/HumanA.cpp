/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:26:09 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 11:59:00 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon) : _weapon(weapon) {

    this->_name = name;
}

HumanA::~HumanA() {
    
}

void HumanA::attack(void) {

    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}