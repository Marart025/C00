/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:13:06 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/10/25 17:03:25 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	try_to_print_numbers(int *table, int n)
{
	int				i;
	unsigned char	flag_low;

	i = 0;
	flag_low = 1;
	while (i < n - 1)
	{
		if (!(table[i] < table[i + 1]))
			flag_low = 0;
		i++;
	}
	if (flag_low)
	{
		i = 0;
		while (i < n)
		{
			write(1, &"0123456789"[table[i] % 10], 1);
			i++;
		}
		if (table[0] < (10 - n))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		table[10];

	if (n > 0 && n < 10)
	{
		i = 0;
		while (i < n)
			table[i++] = 0;
		while (table[0] <= (10 - n))
		{
			try_to_print_numbers(table, n);
			table[n - 1]++;
			i = n - 1;
			while (i && n > 1)
			{
				if (table[i] > 9)
				{
					table[i - 1]++;
					table[i] = 0;
				}
				i--;
			}
		}
	}
}
