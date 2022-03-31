/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirbouzidi <samirbouzidi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:02:37 by samirbouzid       #+#    #+#             */
/*   Updated: 2022/03/31 16:23:47 by samirbouzid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *tab, size_t size, void (*f)(T&)){

    for (size_t i = 0; i < size; i++)
        f(tab[i]);
}

template <typename T>
void print_element(T &element) {

    std::cout << element << std::endl;
}


#endif