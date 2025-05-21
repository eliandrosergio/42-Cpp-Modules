/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:45:12 by efaustin          #+#    #+#             */
/*   Updated: 2025/04/23 17:45:14 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

void	megaphone(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = toupper(*str);
		std::cout << *str;
		str++;
	}
	return ;
}

int	main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (i < ac)
            megaphone(av[i++]);
	std::cout << std::endl;
	return (0);
}
