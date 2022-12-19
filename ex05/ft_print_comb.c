/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:52:31 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/10/27 16:15:33 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '7')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				ft_putchar(digits[0]);
				ft_putchar(digits[1]);
				ft_putchar(digits[2]);
				if (!(digits[0] == '7' && digits[1] == '8' && digits[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}
