/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirbouzidi <samirbouzidi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:42:17 by samirbouzid       #+#    #+#             */
/*   Updated: 2022/03/31 15:57:33 by samirbouzid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>


template <typename T>
void swap(T &first, T &second)
{
    T temp = first;
    first = second;
    second = temp;    
}

template <typename T>
T &min(T &first, T &second)
{
    return (first < second ? first : second);
}

template <typename T>
T &max(T &first, T &second)
{
    return (first > second ? first : second);
}

#endif