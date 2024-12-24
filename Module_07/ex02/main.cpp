/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:42:42 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/24 11:17:34 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main(int, char**)
{
    try
    {
        Array<int>  Arr(2);

        Arr[0] = 1;
        Arr[1] = 2;

        for (size_t i = 0; i < Arr.size(); i++)
            std::cout << Arr[i] << "\n";

        Array<std::string> ArrOfStr(2);

        ArrOfStr[0] = "TEST1";
        ArrOfStr[1] = "TEST2";

        for (size_t i = 0; i < ArrOfStr.size(); i++)
            std::cout << ArrOfStr[i] << "\n";

        // test out of rang :
        ArrOfStr[2] = "F****";
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
    return 0;
}
