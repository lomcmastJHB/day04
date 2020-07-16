/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 07:54:27 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/16 08:01:42 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_fibonacci(int index)
{
	if (index <= 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}


