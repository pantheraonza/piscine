/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:44:26 by criredon          #+#    #+#             */
/*   Updated: 2026/04/23 12:16:45 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	dest[1024];

	if (argc != 2)
		return (1);
	printf("Result %s\n:", ft_strcpy(dest, argv[1]));
	return (0);
}
*/