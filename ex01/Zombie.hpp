/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:27:19 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 11:58:44 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
    
public:
    Zombie();
    ~Zombie();

    void announce(void);
    void setName(std::string name);
private:
     std::string _name;
};

Zombie *zombieHorde(int n, std::string name);

#endif