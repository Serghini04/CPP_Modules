/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:09:43 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/09 21:58:23 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}
    ~MutantStack() {}
    MutantStack(const MutantStack &clone)
    {
        *this = clone;
    }
    MutantStack &operator=(const MutantStack &clone)
    {
        if (this != &clone)
            std::stack<T>::operator=(clone);
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator it;
    typedef typename std::stack<T>::container_type::const_iterator const_it;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_it;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_it;

    it begin()
    {
        return this->c.begin();
    }
    it end()
    {
        return this->c.end();
    }
    const_it begin() const
    {
        return this->c.cbegin();
    }
    const_it end() const
    {
        return this->c.cend();
    }
    reverse_it rbegin()
    {
        return this->c.rbegin();
    }
    reverse_it rend()
    {
        return this->c.rend();
    }
    const_reverse_it rbegin() const
    {
        return this->c.crbegin();
    }
    const_reverse_it rend() const
    {
        return this->c.crend();
    }
};