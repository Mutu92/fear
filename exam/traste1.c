/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traste1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctumaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:27:57 by ctumaill          #+#    #+#             */
/*   Updated: 2019/09/15 18:16:00 by ctumaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void anarchy(int ***nbr)
{
	***nbr = '42';
}

int main (void)
{
	int a;
	int *ptr;
	char writtable;

	ptr = &a;
	
	anarchy(nbr);
	writtable = a +'0';
	write(1, &writtable, 1);

}
