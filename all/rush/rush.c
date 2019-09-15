/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctumaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:18:27 by ctumaill          #+#    #+#             */
/*   Updated: 2019/09/14 19:41:34 by ctumaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (void)
{
	int papa [6] [6];
	int fila;
	int col;

	fila =	0;
	col =	0;
	while ( fila <= 6 & col <= 6 )
	{
		papa[fila][col]=fila*10+col;
		printf("%d | ", papa[fila][col]);
		fila++;
		if(fila == 6 && col < 6)
		{ 
			printf("\n");
			col++;
			fila=0;
		}
		
	}
}
