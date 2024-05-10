/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:39:29 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/10 11:19:24 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main()
{
	Replace	clsReplace;

	if (!clsReplace.ReadInput())
		return (-1);
	clsReplace.ReplaceFromFileToFile();
	return (0);
}