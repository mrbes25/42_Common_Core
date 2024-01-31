/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:54:36 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/04 17:28:13 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer;
	int	i;
	
	buffer = 0;
	i = 0;
	while (i < size / 2)
	{
		buffer = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = buffer;
		i++;
	}
}

/*
int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;

    ft_rev_int_tab(tab, size);

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    
    printf("\n");

    return 0;
}
*/