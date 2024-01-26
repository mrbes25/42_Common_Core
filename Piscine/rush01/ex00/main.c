/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpetrenk <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:53:50 by zpetrenk          #+#    #+#             */
/*   Updated: 2023/09/10 19:13:06 by zpetrenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	solution(int input_values[4][4]);

void	init(char *str, int *position, int arr[4][4])
{
	if (position[1] == 4)
	{
		position[1] = 0;
		position[2] += 1;
	}
	arr[position[2]][position[1]] = str[position[0]] - 48;
	position[1]++;
	position[0]++;
}

int	input(char *str, int *position, int array[4][4])
{
	while (str[position[0]] != '\0')
	{
		if (str[position[0]] >= '1' && str[position[0]] <= '4')
			init(str, position, array);
		else if (str[position[0]] == ' ')
			position[0]++;
		else
		{
			write(1, "Error", 5);
			return (1);
		}
	}
	if (position[0] >= 32)
	{
		write(1, "Error", 5);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		array[4][4];
	int		position[3];

	if (argc == 2)
	{
		i = 0;
		while (i < 3)
		{
			position[i] = 0;
			i++;
		}
		array[3][3] = -1;
		if (input(argv[1], position, array) == 1)
			return (0);
		if (array[3][3] == -1)
			write(1, "Error", 5);
		if (array[3][3] == -1)
			return (0);
		solution(array);
	}
	else
		write(1, "Error!", 1);
}
