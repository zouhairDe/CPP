/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 09:00:05 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/16 09:08:54 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
# include <iostream>
# include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const & src) : std::stack<T>(src) {}
    MutantStack & operator=(MutantStack const & src) { std::stack<T>::operator=(src); return *this; }
    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    
    iterator        begin()
    {
        return std::stack<T>::c.begin();
    }
    iterator        end()
    {
        return std::stack<T>::c.end();
    }
    const_iterator  begin() const
    {
        return std::stack<T>::c.begin();
    }
    const_iterator  end() const
    {
        return std::stack<T>::c.end();
    }
};

#endif