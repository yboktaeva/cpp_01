/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:22:22 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 13:17:41 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl();
    ~Harl();

    void complain(std::string level);
};

#endif