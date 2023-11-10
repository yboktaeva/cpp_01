/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:27:08 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 11:58:35 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::~Zombie() {

    std::cout << this->_name << ": is died" << std::endl;
}

void Zombie::setName(std::string name) {

    this->_name = name;
}

void Zombie::announce(void) {
    
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}