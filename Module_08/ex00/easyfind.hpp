/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:21:25 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/26 12:13:45 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <vector>
# include <algorithm>

template<typename T> typename T::iterator	easyfind(T &data, int value)
{
	typename T::iterator	it = std::find(data.begin(), data.end(), value);
	if (it == data.end())
		throw std::invalid_argument("Invalid Value\n");
	return (it);
}
