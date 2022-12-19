/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:09:38 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/10/21 10:44:58 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_combn(int n);

int	main(void)
{
	int	n;

	n = 3;
	printf("Using n = %d\n", n);
	ft_print_combn(n);
	return (0);
}
