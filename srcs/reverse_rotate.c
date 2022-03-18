/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:13:36 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 15:13:37 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_stack *stack, int msg)
{
	int	temp;

	temp = stack->stack_a[*stack->size_A - 1];
	if (*stack->size_A > 1)
	{
		move_down(stack->stack_a, *stack->size_A);
		stack->stack_a[0] = temp;
		*stack->pivot += 1;
		if (msg)
			ft_putendl_fd("rra", 1);
	}
}

void	reverse_rotate_b(t_stack *stack, int msg)
{
	int	temp;

	temp = stack->stack_b[*stack->size_B - 1];
	if (*stack->size_B > 1)
	{
		move_down(stack->stack_b, *stack->size_B);
		stack->stack_b[0] = temp;
		*stack->pivot += 1;
		if (msg)
			ft_putendl_fd("rrb", 1);
	}
}

void	reverse_rotate_both(t_stack *stack)
{
	reverse_rotate_a(stack, 0);
	reverse_rotate_b(stack, 0);
	*stack->pivot -= 1;
	ft_putendl_fd("rrr", 1);
}
