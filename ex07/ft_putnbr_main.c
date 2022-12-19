/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:05:59 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/10/20 15:07:50 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nbr);
void	ft_putchar(char c);

int	main(void)
{
	int	n;

	printf("INT_MAX = %d | INT_MIN = %d\n", INT_MAX, INT_MIN);
	puts("");
	n = 0;
	printf("%d\n", n);
	ft_putnbr(n);
	printf("\n\n");
	n = 42;
	printf("%d\n", n);
	ft_putnbr(n);
	printf("\n\n");
	n = -42;
	printf("%d\n", n);
	ft_putnbr(n);
	printf("\n\n");
	n = INT_MAX;
	printf("%d\n", n);
	ft_putnbr(n);
	printf("\n\n");
	n = INT_MIN;
	printf("\n%d\n", n);
	ft_putnbr(n);
	return (0);
}
