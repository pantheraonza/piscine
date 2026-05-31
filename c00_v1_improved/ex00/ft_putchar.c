/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:47:53 by criredon          #+#    #+#             */
/*   Updated: 2026/04/12 17:36:45 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putchar('a');
	return (0);
}
*/

/* int	main(int argc, char **argv)
{
	char c;

	if (argc != 2)
	{
		return (1);
	}
	c = argv[1][0];
	ft_putchar(c);
	return (0);
} */