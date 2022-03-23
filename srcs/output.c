/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:13:07 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/23 19:51:10 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	output_a(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < *stack->size_a)
	{
		ft_putnbr_fd(stack->stack_a[i], 1);
		ft_putstr_fd(" ", 1);
	}
}

void	output_b(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < *stack->size_b)
	{
		ft_putnbr_fd(stack->stack_b[i], 1);
		ft_putstr_fd(" ", 1);
	}
}

void	output_sorting(t_stack *stack, int output, int msg)
{
	if (output > 0)
	{
		if (msg == 1)
		{
			ft_putnbr_fd(*stack->pivot, 1);
			ft_putendl_fd("\n", 1);
		}
		else if (msg == 2)
		{
			ft_putnbr_fd(*stack->pivot, 1);
			ft_putendl_fd("\n", 1);
		}
		output_a(stack);
		output_b(stack);
	}
}
