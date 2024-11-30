/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:43:03 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/28 21:07:59 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

template <class T>

class Array
{
	private :
		T				*_arr;
		unsigned int	_size;
	public :
		Array()
		{
			_arr = NULL;
			_size = 0;
		}
		Array(unsigned int n)
		{
			if (n < 0)
				return ;
			_arr = new T[n];
			_size = n;
		}
		Array(const Array &clone)
		{
			_arr = new T(clone._size);
			_size = clone._size;
			for (int i = 0; i < _size; i++)
				_arr[i] = clone._arr[i];
		}
		Array &operator=(const Array &clone)
		{
			if (this != &clone)
			{
				_size = clone._size;
				_arr = clone._arr;
			}
			return this;
		}
		size_t	size()
		{
			return _size;
		}
		Array &operator[](int i)
		~Array()
		{
			_size = 0;
			delete	_arr;
		}
};
