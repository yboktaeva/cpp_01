/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:33:07 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/26 11:19:13 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    Zombie z1 = Zombie();
    z1.announce();

    Zombie *z2 = newZombie("Foo");
    delete(z2);

    randomChump("Boo");
    
    return 0;
}