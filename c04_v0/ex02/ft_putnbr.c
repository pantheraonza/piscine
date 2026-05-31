/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:23:42 by criredon          #+#    #+#             */
/*   Updated: 2026/04/29 21:23:43 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nb_long;
	char	nb_word;

	nb_long = nb;
	if (nb_long < 0)
	{
		nb_long = nb_long * -1;
		write(1, "-", 1);
	}
	if (nb_long >= 10)
	{
		ft_putnbr(nb_long / 10);
	}
	nb_word = nb_long % 10 + '0';
	write (1, &nb_word, 1);
}

/* int	main(void)
{
	ft_putnbr(0);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	return (0);
} */