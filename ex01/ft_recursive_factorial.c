/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:23:28 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/15 13:36:09 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if ( nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


