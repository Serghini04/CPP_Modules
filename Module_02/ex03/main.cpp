/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:08:39 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/25 14:46:53 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main ( void )
{
    if (bsp(Point(5.5, 1.2), Point(15, 20.55), Point(54.6, 14), Point(18.5, 16)))
        std::cout << "===>>>Inside<<<===" << std::endl;
    else
        std::cout << "===>>>Outside<<<===" << std::endl;
    return 0;
}
