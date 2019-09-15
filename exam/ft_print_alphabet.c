/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctumaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:20:49 by ctumaill          #+#    #+#             */
/*   Updated: 2019/09/13 13:34:14 by ctumaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_alphabet(void)
{
	char alpha;
	
	alpha = 'a';
	while(alpha <= 'z')
	{	
		write(1, &alpha, 1);
		alpha++;
	}
}

int main(void)
{
	ft_print_alphabet();
}
