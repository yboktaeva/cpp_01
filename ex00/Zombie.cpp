/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:33:34 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 11:58:17 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

    this->_name = "no name";
}

Zombie::Zombie(std::string name) {

    this->_name = name;
}

Zombie::~Zombie() {

    std::cout << this->_name << ": is died" << std::endl;
}

void Zombie::announce(void) {
    
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}