/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmandlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:56:59 by nmandlan          #+#    #+#             */
/*   Updated: 2019/06/03 14:41:21 by nmandlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>


void	megaphone(int ac, char **av)
{
	for(int i = 1; i < ac; i += 1)
	{
		for(int j = 0; j < (int)strlen(av[i]); j += 1)
		{
			putchar(toupper(av[i][j]));
		}
	}
	putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		megaphone(ac, av);
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}
