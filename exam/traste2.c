/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traste2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctumaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:35:12 by ctumaill          #+#    #+#             */
/*   Updated: 2019/09/15 18:27:39 by ctumaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void defqon(int *ptr)
{
	 *ptr = 45;
}

int main(void)
{
	int a;
	int *ptr;
	char pp;
	ptr = &a;
	defqon(ptr);
	pp = ( a / 10 + '0');
	write(1, &pp, 1);
	pp = ( a % 10 + '0');
	write(1, &pp, 1);
	return (0);
}
