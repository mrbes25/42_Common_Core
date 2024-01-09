/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpetrenk <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:23:05 by zpetrenk          #+#    #+#             */
/*   Updated: 2023/09/10 19:27:34 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void init_matrix(int input_values[4][4], int matrix[4][4]);
void ft_print(int array[4][4]);
int valid_row_left_right(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4]);
void ft_print(int array[4][4]);
int valid_row_left_right(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4]);
int valid_col_up_down(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4]);
int valid_right_left(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4]);
int valid_down_up(int check, int *attributes, int matrix[4][4], int puzzle_values[4][4]);
int check_condition_loop(int *index, int *attributes, int input_values[4][4], int matrix[4][4]);


int	check_valid(int matrix[4][4], int input_values[4][4], int *attributes)
{
	matrix[attributes[0]][attributes[1]] = attributes[2];
	if (valid_row_left_right(0, attributes, matrix, input_values) == 1)
		return (1);
	if (valid_col_up_down(0, attributes, matrix, input_values) == 1)
		return (1);
	if (valid_right_left(0, attributes, matrix, input_values) == 1)
		return (1);
	if (valid_down_up(0, attributes, matrix, input_values) == 1)
		return (1);
	return (0);
}

int	check_condition(int input_values[4][4], int row, int col)
{
	if ((row == 0) && (input_values[0][col] == 2 || input_values[0][col] == 3))
		return (1);
	if ((row == 3) && (input_values[1][col] == 2 || input_values[1][col] == 3))
		return (1);
	if ((col == 0) && (input_values[2][row] == 2 || input_values[2][row] == 3))
		return (1);
	if ((col == 3) && (input_values[3][row] == 2 || input_values[3][row] == 3))
		return (1);
	return (0);
}

int	recursion(int matrix[4][4], int input_values[4][4], int row, int col)
{
	int	index;
	int	attributes[3];

	index = 0;
	attributes[0] = row;
	attributes[1] = col;
	if (row == 4)
		return (0);
	else if (col == 4)
		return recursion(matrix, input_values, row + 1, 0);
	else if (matrix[row][col] != -1)
		return recursion(matrix, input_values, row, col + 1);
	else
	{
		if (check_condition_loop(&index, attributes, input_values, matrix) == 0)
			return (0);
		else
			return (1);
	}
}

void	solution(int input_values[4][4])
{
	int	matrix[4][4];
	int	row;
	int	col;
	int	result;

	row = 0;
	while (row < 4)
	{
	col = 0;
		while (col < 4)
		{
		matrix[row][col] = -1;
		col++;
		}
		row++;
	}
	init_matrix(input_values, matrix);
	result = recursion(matrix, input_values, 0, 0);
	if (result == 0)
		ft_print(matrix);
	else
		write(1, "Error", 5);
}

int	check_condition_loop(int *index, int *attributes, int input_values[4][4], int matrix[4][4])
{
	int	row, col;

	row = attributes[0];
	col = attributes[1];
	while (++(*index) < 5)
	{
		if (*index == 4 && (attributes[0] == 0 || attributes[1] == 0 || attributes[0] == 3 || attributes[1] == 3))
		{
			if (check_condition(input_values, row, col) == 1)
				continue ;
		}
		attributes[2] = *index;
		if (check_valid(matrix, input_values, attributes) == 0)
		{
			if (recursion(matrix, input_values, row, col + 1) == 0)
				return (0);
			matrix[row][col] = -1;
		}
		else
			matrix[row][col] = -1;
	}	
	return (1);
}
