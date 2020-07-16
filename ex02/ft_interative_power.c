/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:49:32 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/16 08:02:37 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_interative_power(int nb, int power)
{
	int		i;
	
	i = 1;
	while (power > 0)
	{
		i = i * nb;
		power --;
	}
	return (i);
}
