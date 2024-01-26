/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpetrenk <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:22:32 by zpetrenk          #+#    #+#             */
/*   Updated: 2023/09/10 18:46:28 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void assign_values(int matrix[4][4], int *i, int *j, int input_values[4][4]);
void increment_assign(int matrix[4][4], int constant, int check_row_column, int check_inc_dec);
void assign_four(int matrix[4][4], int i, int j);

void	init_matrix(int input_values[4][4], int matrix[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (input_values[i][j] == 4 || input_values[i][j] == 1)
			{
				assign_values(matrix, &i, &j, input_values);
			}
		}
	}
}

void	assign_values(int matrix[4][4], int *i, int *j, int input_values[4][4])
{
	int	z;

	z = -1;
	if (input_values[*i][*j] == 1)
		assign_four(matrix, *i, *j);
	else if (*i == 0)
		increment_assign(matrix, *j, 1, 0);
	else if (*i == 1)
		increment_assign(matrix, *j, 1, 1);
	else if (*i == 2)
		increment_assign(matrix, *j, 0, 0);
	else
		increment_assign(matrix, *j, 0, 1);
}

void	increment_assign(int matrix[4][4], int constant, int check_row_column, int check_inc_dec)
{
	int	z;

	if (check_inc_dec == 0)
	{
		z = 0;
		while (z < 4)
		{
			if (check_row_column == 0)
				matrix[constant][z] = z + 1;
			else
				matrix[z][constant] = z + 1;
			z++;
		}
	}
	else
	{
		z = 3;
		while (z > -1)
		{
			if (check_row_column == 0)
				matrix[constant][z] = 4 - z;
			else
				matrix[z][constant] = 4 - z;
			z--;
		}
	}
}

void	assign_four(int matrix[4][4], int i, int j)
{
	if (i == 0)
		matrix[0][j] = 4;
	else if (i == 1)
		matrix[3][j] = 4;
	else if (i == 2)
		matrix[j][0] = 4;
	else
		matrix[j][3] = 4;
}
