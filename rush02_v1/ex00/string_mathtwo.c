/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_mathtwo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:29:07 by criredon          #+#    #+#             */
/*   Updated: 2026/04/26 21:15:08 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

void	ft_count_to_str(char *result, int count)
{
	int	i;

	i = 0;
	if (count == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return ;
	}
	while (count > 0)
	{
		result[i] = (count % 10) + '0';
		count = count / 10;
		i = i + 1;
	}
	result[i] = '\0';
	ft_strrev(result);
}

void	ft_convert_mul(char *number, t_dict *dict, int dict_size, int idx)
{
	char	quotient[256];
	char	remainder[256];

	ft_strdiv(quotient, remainder, number, dict[idx].dict_number);
	ft_trim_zeros(quotient);
	ft_trim_zeros(remainder);
	ft_convert_input(quotient, dict, dict_size);
	write(1, " ", 1);
	write(1, dict[idx].dict_words, ft_strlen(dict[idx].dict_words));
	if (ft_strcmp(remainder, "0") > 0)
		write(1, " ", 1);
	ft_strcpy(number, remainder);
}

void	ft_convert_add(char *number, t_dict *dict, int idx)
{
	write(1, dict[idx].dict_words, ft_strlen(dict[idx].dict_words));
	ft_strsub(number, number, dict[idx].dict_number);
	ft_trim_zeros(number);
	if (ft_strcmp(number, "0") > 0)
		write(1, " ", 1);
}
