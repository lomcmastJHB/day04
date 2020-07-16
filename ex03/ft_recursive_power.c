/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:19:30 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/15 16:08:28 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int		res;

	if (power < 0)
	{
		return (0);
	}
	else if (power > 0)
	{
		res = nb * ft_recursive_power(nb, power - 1);
		return (res);
	}
	else
		return(1);
}

