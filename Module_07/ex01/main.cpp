/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:50:00 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/27 17:40:54 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main()
{
	int arr[2];
	std::string	names[2];
	

	arr[0] = 1;
	arr[1] = 2;
	iter(arr, 2, fn<int>);

	names[0] = "ANA";
	names[1] = "King";
	iter(names, 2, fn<std::string>);
	return 0;
}
