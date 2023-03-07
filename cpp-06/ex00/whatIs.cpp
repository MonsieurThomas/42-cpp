/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatIs.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:37:12 by rthomas           #+#    #+#             */
/*   Updated: 2023/01/22 15:15:33 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cctype>

int is_int(std::string s)
{
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (!isdigit(s[i]) && s[i] != '+' && s[i] != '-')
            return 0;
        if (s[i] == '.')
            return 0;
    }
    try
    {
        int input = std::stoi(s);
        (void) input;
    }
    catch(const std::exception& e)
    {
        return 0;
    }
    return 1;
}

int is_double(std::string s)
{
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (!isdigit(s[i]))
        {
            if ((s[i] == '+' || s[i] == '-'))
            {
                if (i != 0)
                    return 0;
            }
            else if (s[i] != '.' || i == (int)s.length() - 1)
            {
               return 0;    
            }
        }

    }
    return 1;
}

int is_float(std::string s)
{
    if ((int)s.length() == 1)
        return 0;
    for (int i = 0; i < (int)s.length(); i++)
    {
        s[i] = std::tolower(s[i]);
        if (!isdigit(s[i]))
        {
            if (s[i] == 'f')
            {
                if (i != (int)s.length() - 1)
                    return 0;
            }
            else if (s[i] == '.')
            {
                if (i == (int)s.length() - 1)
                    return 0;
            }
            else if ((s[i] == '+' || s[i] == '-'))
            {
                if (i != 0)
                    return 0;
            }
            else
            {
                return 0;
            } 
        }
    }
    try
    {
        float n = std::stof(s);
        (void) n;
    }
    catch(const std::exception& e)
    { return 0; }
    
    return 1;
}

int is_char(std::string s)
{
    if ((int)s.length() != 1)
        return 0;
    return 1;
}



int ft_whatIs(std::string s)
{
    if (is_int(s))
        return 1;
    if (is_double(s))
        return 2;
    if (is_float(s))
        return 3;
    if (is_char(s))
        return 4;
    return 0;
}
