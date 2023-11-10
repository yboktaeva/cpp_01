/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:33:22 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 12:08:11 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie {

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void);

private:
    std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif