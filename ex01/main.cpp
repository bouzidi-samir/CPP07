/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirbouzidi <samirbouzidi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:02:20 by samirbouzid       #+#    #+#             */
/*   Updated: 2022/03/31 16:30:37 by samirbouzid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
    std::string str[3] = { "cat", "game", "sleep" };
    int inttab[3] = {0, 10, 20};
    float flotab[3] = {0.5, 10.5, 20.5};

    iter(str, 3, print_element);    
    std::cout << std::endl;
    iter(inttab, 3, print_element); 
    std::cout << std::endl;
    iter(flotab, 3, print_element);
    
    return 0;
}