/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:25:55 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 12:16:46 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:
    std::string _name;
    Weapon &_weapon;

public:
    HumanA(std::string const &name, Weapon &weapon);
    ~HumanA();

    void attack(void);
};

#endif