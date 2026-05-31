/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:00:47 by criredon          #+#    #+#             */
/*   Updated: 2026/04/26 16:00:49 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

int	find_dict_key(t_dict *dict, int dict_size, char *number)
{
	int	i;
	int	best_match;

	best_match = -1;
	i = 0;
	while (i < dict_size)
	{
		if (ft_strcmp(dict[i].dict_number, number) <= 0)
		{
			if (best_match == -1 || ft_strcmp(dict[i].dict_number,
					dict[best_match].dict_number) > 0)
				best_match = i;
		}
		i = i + 1;
	}
	return (best_match);
}

void	ft_convert_input(char *number, t_dict *dict, int dict_size)
{
	int	input_index;

	if (number[0] == '0' && number[1] == '\0')
	{
		write(1, dict[0].dict_words, ft_strlen(dict[0].dict_words));
		return ;
	}
	while (ft_strcmp(number, "0") > 0)
	{
		input_index = find_dict_key(dict, dict_size, number);
		if (input_index == -1)
		{
			write(1, "Dict Error\n", 11);
			return ;
		}
		if (ft_strlen(dict[input_index].dict_number) > 2)
			ft_convert_mul(number, dict, dict_size, input_index);
		else
			ft_convert_add(number, dict, input_index);
	}
}
