/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:13:46 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 15:13:47 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	swap_a(t_stack *stack, int msg)
{
	if (*stack->size_A > 1)
	{
		swap(&stack->stack_a[0], &stack->stack_a[1]);
		*stack->pivot += 1;
		if (msg)
			ft_putendl_fd("sa", 1);
	}
}

void	swap_b(t_stack *stack, int msg)
{
	if (*stack->size_B > 1)
	{
		swap(&stack->stack_b[0], &stack->stack_b[1]);
		*stack->pivot += 1;
		if (msg)
			ft_putendl_fd("sb", 1);
	}
}

void	swap_both(t_stack *stack)
{
	swap_a(stack, 0);
	swap_b(stack, 0);
	*stack->pivot -= 1;
	ft_putendl_fd("ss", 1);
}
