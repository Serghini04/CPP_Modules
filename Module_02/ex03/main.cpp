/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:08:39 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/09 16:14:59 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main ( void )
{
    if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15)))
        std::cout << "===>>>Inside<<<===" << std::endl;
    else
        std::cout << "===>>>Outside<<<===" << std::endl;
    return 0;
}
