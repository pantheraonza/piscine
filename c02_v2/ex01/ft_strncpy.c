/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:16:49 by criredon          #+#    #+#             */
/*   Updated: 2026/04/23 14:36:41 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	numero;
	int	i;

	numero = 0;
	i = 0;
	while (str[i] != '\0')
	{
		numero = numero * 10 + (str[i] - '0');
		i = i + 1;
	}
	return (numero);
}

#include <string.h>

int	main(int argc, char **argv)
{
	char	dest[1024] = {0};
	char	dest_o[1024] = {0};
	char	*str;
	int		n;


	if (argc != 3)
	{
		return (1);
	}
	str = argv[1];
	n = ft_atoi(argv[2]);
	printf("Result funcion: %s\n", ft_strncpy(dest, str, n));
	printf("Result strncpy: %s\n", strncpy(dest_o, str, n));
	return (0);
}
*/