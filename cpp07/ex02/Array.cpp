/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:40:13 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/13 22:31:35 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), Rsize(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), Rsize(n)
{
    for (unsigned int i = 0; i < Rsize; i++)
        array[i] = static_cast<T>(0);
}

template <typename T>
Array<T>::Array(const Array &src) : array(new T[src.Rsize]), Rsize(src.Rsize)
{
    for (unsigned int i = 0; i < Rsize; i++)
        array[i] = src.array[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
    if (this == &src)
        return *this;
    delete[] array;
    array = new T[src.Rsize];
    Rsize = src.Rsize;
    for (unsigned int i = 0; i < Rsize; i++)
        array[i] = src.array[i];
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= Rsize)
        throw std::out_of_range("Index out of range");
    return array[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= Rsize)
        throw std::out_of_range("Index out of range");
    return array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return Rsize;
}

template class Array<int>;
template class Array<float>;
template class Array<double>;
template class Array<char>;
template class Array<bool>;
template class Array<unsigned int>;
template class Array<unsigned char>;
template class Array<unsigned long>;
template class Array<unsigned long long>;
template class Array<unsigned short>;
template class Array<long>;
template class Array<long long>;
template class Array<long double>;
template class Array<short>;
template class Array<std::string>;