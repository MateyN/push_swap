/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:12:14 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/24 19:02:41 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_arguments(char *args)
{
	int	i;

	i = -1;
	while (args[++i])
	{
		if (((args[i] == 45 && ft_isdigit(args[i + 1]))
				|| args[i] == 32 || ft_isdigit(args[i])))
			continue ;
		else
		{
			ft_putendl_fd("Error", 1);
			exit(EXIT_FAILURE);
			return (0);
		}
	}
	return (1);
}

int	check_duplicate(int *stack, int stack_size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= stack_size)
	{
		j = i + 1;
		while (j <= stack_size)
		{
			if (stack[i] == stack[j])
			{
				ft_putendl_fd("Error", 1);
				exit(EXIT_FAILURE);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_order(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < (*stack->size_a - 1))
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	check_min_max_int(long int args, t_stack *stack)
{
	int	i;

	i = 0;
	if (args > 2147483647 || args < -2147483648)
	{
		free_stacks(stack);
		ft_putendl_fd("Error", 1);
		exit(EXIT_FAILURE);
	}
	return (1);
}
