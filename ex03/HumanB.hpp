/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:26:23 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 17:00:03 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

private:
    std::string _name;
    Weapon const *_weapon;

public:
    HumanB(std::string const &name);
    ~HumanB();

    void attack(void) const;
    void setWeapon(Weapon const &weapon);
};

#endif