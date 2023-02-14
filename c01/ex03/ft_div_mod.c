/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:18:33 by ylachhab          #+#    #+#             */
/*   Updated: 2022/08/31 23:25:29 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*int	main()
{
	int x = 15;
	int y = 3;
	int dive;
	int mode;
	ft_div_mod(x, y, &dive, &mode);
	printf("%d\n%d\n", dive,mode);
	return 0;
}*/
