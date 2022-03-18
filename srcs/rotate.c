/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:13:12 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 15:13:24 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stack *stack, int msg)
{
	int	temp;

	temp = stack->stack_a[0];
	if (*stack->size_A > 1)
	{
		move_up(stack->stack_a, *stack->size_A);
		stack->stack_a[*stack->size_A - 1] = temp;
		*stack->pivot += 1;
		if (msg)
			ft_putendl_fd("ra", 1);
	}
}

void	rotate_b(t_stack *stack, int msg)
{
	int	tmp;

	tmp = stack->stack_b[0];
	if (*stack->size_B > 1)
	{
		move_up(stack->stack_b, *stack->size_B);
		stack->stack_b[*stack->size_B - 1] = tmp;
		*stack->pivot += 1;
		if (msg)
			ft_putendl_fd("rb", 1);
	}
}

void	rotate_both(t_stack *stack)
{
	rotate_a(stack, 0);
	rotate_b(stack, 0);
	*stack->pivot -= 1;
	ft_putendl_fd("rr", 1);
}
