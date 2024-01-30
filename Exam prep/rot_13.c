/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:51:25 by bschmid           #+#    #+#             */
/*   Updated: 2024/01/30 11:51:28 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;
	while (argv[1][i] != 0)
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] < 'N')
					argv[1][i] = argv[1][i] + 13;
				else
					argv[1][i] = argv[1][i] - 13;
			}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] < 'n')
					argv[1][i] = argv[1][i] + 13;
				else
					argv[1][i] = argv[1][i] - 13;
			}
			char out = argv[1][i];
			write(1, &out, 1);
			i++;
	}
	write(1, "\n", 1);
	return (0);
}