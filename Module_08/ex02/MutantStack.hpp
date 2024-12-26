/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:09:43 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/26 15:03:16 by meserghi         ###   ########.fr       */
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
        if (this->empty())
            throw std::runtime_error("Empty Stack !");
        return this->c.begin();
    }
    it end()
    {
        if (this->empty())
            throw std::runtime_error("Empty Stack !");
        return this->c.end();
    }
    const_it begin() const
    {
        if (this->empty())
            throw std::runtime_error("Empty Stack !");
        return this->c.cbegin();
    }
    const_it end() const
    {
        if (this->empty())
            throw std::runtime_error("Empty Stack !");
        return this->c.cend();
    }
    reverse_it rbegin()
    {
        if (this->empty())
            throw std::runtime_error("Empty Stack !");
        return this->c.rbegin();
    }
    reverse_it rend()
    {
        if (this->empty())
            throw std::runtime_error("Empty Stack !");
        return this->c.rend();
    }
    const_reverse_it rbegin() const
    {
        if (this->empty())
            throw std::runtime_error("Empty Stack !");
        return this->c.crbegin();
    }
    const_reverse_it rend() const
    {
        if (this->empty())
            throw std::runtime_error("Empty Stack !");
        return this->c.crend();
    }
};