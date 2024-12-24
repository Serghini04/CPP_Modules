/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:43:03 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/24 11:16:16 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

template <class T>

class Array
{
	private :
		T		*_arr;
		size_t	_size;
	public :
		Array()
		{
			_arr = NULL;
			_size = 0;
		}
		Array(unsigned int n)
		{
			_arr = new T[n];
			_size = n;
		}
		Array(const Array &clone)
		{
			_arr = new T[clone._size];
			_size = clone._size;
			for (size_t i = 0; i < _size; i++)
				_arr[i] = clone._arr[i];
		}
		Array &operator=(const Array &clone)
		{
			if (this != &clone)
			{
				_size = clone._size;
				delete[] _arr;
				_arr = new T[_size];
				for (size_t i = 0; i < _size; i++)
					_arr[i] = clone._arr[i];
			}
			return *this;
		}
		size_t	size() const
		{
			return _size;
		}
		class OutOfBounds : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return "Index is out of bounds !!";
				}
		};
		T &operator[](unsigned int i)
		{
			if (i < _size)
				return (_arr[i]);
			throw OutOfBounds();
		}
		const T &operator[](unsigned int i) const
		{
			if (i < _size)
				return (_arr[i]);
			throw OutOfBounds();
		}
		~Array()
		{
			_size = 0;
			delete[] _arr;
		}
};
