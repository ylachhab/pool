/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:26:37 by ylachhab          #+#    #+#             */
/*   Updated: 2022/09/05 13:42:15 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	chiffres;

	chiffres = '0';
	while (chiffres <= '9')
	{
		write(1, &chiffres, 1);
		chiffres++;
	}
}
