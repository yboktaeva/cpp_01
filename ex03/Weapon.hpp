/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:24:33 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 11:59:34 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

private:
    std::string _type;
public:
    Weapon(std::string const &type);
    ~Weapon();
    
    std::string const &getType() const;
    void setType(std::string const &type);
};

#endif