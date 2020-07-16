/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:59:23 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/15 14:20:59 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_interative_factorial(int nb)
{
		int		i;

		i = nb - 1;
		while (i > 0)
		{
			nb = nb * i;
			i --;
		}
		if (nb == 0)
		{
			return (1);
		}
		else if (nb < 0)
		{
			return (0);
		}	
		return (nb);
}
