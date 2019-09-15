/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traste.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctumaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:58:58 by ctumaill          #+#    #+#             */
/*   Updated: 2019/09/15 17:02:22 by ctumaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void w42(int *jai)
{
	*jai = 42;

}

int main (void)
{
	int a;
	int	*ptr;
	char writtable;

	ptr = &a;
	w42(ptr);
	
	writtable = a + '0';
	write(1, &writtable, 1);
}
