/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpetrenk <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:23:15 by zpetrenk          #+#    #+#             */
/*   Updated: 2023/09/10 19:10:30 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_row_left_right(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4])
{
	int	i;
	int	biggest_value;
	int	count;

	i = 0;
	biggest_value = 0;
	count = 0;
	while (i < 4)
	{
		if (attributes[2] == matrix[attributes[0]][i] && i != attributes[1])
		{
			return (1);
			if (matrix[attributes[0]][i] > biggest_value)
				biggest_value = matrix[attributes[0]][i];
			count++;
		}
		if (matrix[attributes[0]][i] == -1)
			check = 1;
		i++;
	}
	if (count > puzzle_values[2][attributes[0]] && check == 0)
		return (1);
	if (check == 0 && count != puzzle_values[2][attributes[0]])
		return (1);
	return (0);
}

int	valid_col_up_down(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4])
{
	int	i;
	int	biggest_value;
	int	count;

	count = 0;
	i = 0;
	biggest_value = 0;
	while (i < 4)
	{
		if (attributes[2] == matrix[i][attributes[1]] && i != attributes[0])
			return (1);
		if (matrix[i][attributes[1]] > biggest_value)
		{
			biggest_value = matrix[i][attributes[1]];
			count++;
		}
		if (matrix[i][attributes[1]] == -1)
			check = (1);
		i++;
	}
	if (count > puzzle_values[0][attributes[1]] && check == 0)
		return (1);
	if (check == 0 && count != puzzle_values[0][attributes[1]])
		return (1);
	return (0);
}

int	valid_right_left(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4])
{
	int	count;
	int	biggest_value;
	int	i;

	count = 0;
	biggest_value = 0;
	i = 3;
	while (i > -1)
	{
		if (matrix[attributes[0]][i] > biggest_value)
		{
			biggest_value = matrix[attributes[0]][i];
			count++;
		}
		if (matrix[attributes[0]][i] == -1)
			check = 1;
			i--;
	}
	if (count > puzzle_values[3][attributes[0]] && check == 0)
		return (1);
	if (check == 0 && count != puzzle_values[3][attributes[0]])
		return (1);
	return (0);
}

int	valid_down_up(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4])
{
	int	count;
	int	biggest_value;
	int	i;

	count = 0;
	biggest_value = 0;
	i = 3;
	while (i > -1)
	{
		if (matrix[i][attributes[1]] > biggest_value)
		{
			biggest_value = matrix[i][attributes[1]];
			count++;
		}
		if (matrix[i][attributes[1]] == -1)
		check = 1;
		i--;
	}
	if (count > puzzle_values[1][attributes[1]] && check == 0)
		return (1);
	if (check == 0 && count != puzzle_values[1][attributes[1]])
		return (1);
	return (0);
}
