/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:24:48 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 11:59:27 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) {
    
    this->_type = type;
}

Weapon::~Weapon() {
    
}

std::string const &Weapon::getType() const {
    
    return this->_type;
}

void Weapon::setType(std::string const &type) {

    this->_type = type;
}