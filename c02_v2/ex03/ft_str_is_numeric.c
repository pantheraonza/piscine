/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:14:39 by criredon          #+#    #+#             */
/*   Updated: 2026/04/27 22:14:44 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i = i + 1;
	}
	return (1);
}

/*
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (1);
	}
	printf("Result %d\n", ft_str_is_numeric(argv[1]));
	return (0);
}
*/