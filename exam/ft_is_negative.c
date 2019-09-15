/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctumaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:58:00 by ctumaill          #+#    #+#             */
/*   Updated: 2019/09/13 14:12:48 by ctumaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	if (n >= 0)
	{	
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

int main(void)
{
	ft_is_negative(4);
}
