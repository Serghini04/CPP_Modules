/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:57:01 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/27 12:46:21 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

template	<typename T> void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template	<typename T> T	min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template	<typename T> T	max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}
