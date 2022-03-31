/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirbouzidi <samirbouzidi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:33:51 by samirbouzid       #+#    #+#             */
/*   Updated: 2022/03/31 19:46:05 by samirbouzid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array {

    public:
        Array();   
        Array(unsigned int n);
        Array(const Array& ref);
        
        Array &operator=(const Array& ref);
        T& operator[](int idx);
        int size() const;

        class ArrayException : public std::exception
        {
            public:
                ArrayException(std::string m);
                const char* what() const throw();
                ~ArrayException() throw();
            private:
                std::string mMessage;
        };
        
        ~Array();

    private:
        T *arr;
        int _size;
};

//////////////////////////////////////

template <class T>
Array<T>::Array(void) : arr(NULL), _size(0) {};

template <class T>
Array<T>::Array(unsigned int n) : _size(n)
{
    if (_size < 0)
        throw ArrayException("The can't be negative");
    this->arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array& ref) : _size(ref.size)
{
    arr = new T[_size];
    for (int i = 0; i < _size; ++i)
    {
        this->arr[i] = ref.arr[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& ref)
{
    delete[] arr;

    _size = ref._size();
    arr = new T[_size];
    for (int i = 0; i < _size; ++i)
    {
        arr[i] = ref.arr[i];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](int idx)
{
    if (idx >= _size || idx < 0)
        throw ArrayException("Input index is out of array!");
    return arr[idx];
}

template <typename T>
int Array<T>::size(void) const
{
    return this->_size;
}

template <typename T>
Array<T>::ArrayException::ArrayException(std::string m)
: mMessage(m) {}

template <typename T>
const char* Array<T>::ArrayException::what(void) const throw()
{
    return mMessage.c_str();
}

template <typename T>
Array<T>::ArrayException::~ArrayException(void) throw() {}

template <typename T>
Array<T>::~Array()
{
    delete[] arr;
}

#endif