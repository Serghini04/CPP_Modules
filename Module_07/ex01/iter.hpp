/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:50:15 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/27 17:38:11 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

template <typename T> void	iter(T *arr, int length, void (*f)(T&))
{
	if (!arr || length <= 0)
		return ;
	for	(int i = 0; i < length; i++)
		(f)(arr[i]);
}

template <typename T> void	fn(T &data)
{
	std::cout << "Value is : " << data << "\n";
}
