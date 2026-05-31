/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:08:40 by criredon          #+#    #+#             */
/*   Updated: 2026/04/28 19:08:41 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		i++;
		size = size + 1;
	}
	return (size);
}

/* DESCRIPTION: The  strlen() function calculates the length of the
string pointed to by s, excluding the terminating null byte ('\0').

RETURN VALUE: The strlen() function returns the number
of bytes in the string pointed to by s. */

/* int	main(int argc, char **argv)
{
	char *str;

	if (argc == 0)
		return (1);
	str = argv[1];
	printf("Original function %lu\n", strlen(str));
	printf("Replicated function %d\n", ft_strlen(str));
	return (0);
} */
