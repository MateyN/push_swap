/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:12:24 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 18:01:22 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	radix_sort(t_stack *stack, int max_bits, int max_size)
{
	int	i;
	int	j;
	int	num;

	i = -1;
	while (((max_size - 1) >> max_bits) != 0)
		++max_bits;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < max_size)
		{
			num = stack->stack_a[0];
			if (((num >> i) & 1) == 1)
				rotate_a(stack, 1);
			else
				push_b(stack);
		}
		while (*stack->size_b)
			push_a(stack);
	}
	if (stack->stack_a[0] > stack->stack_a[*stack->size_a - 1])
		rotate_a(stack, 1);
}

void	sort_three(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[*stack->size_a / 2])
		swap_a(stack, 1);
	if (!check_order(stack)
		&& stack->stack_a[1] > stack->stack_a[*stack->size_a])
	{
		reverse_rotate_a(stack, 1);
		if (stack->stack_a[0] > stack->stack_a[1])
			swap_a(stack, 1);
	}
}

void	sort_five(t_stack *stack)
{
	if (stack->stack_a[0] <= 2)
		push_b(stack);
	else
		rotate_a(stack, 1);
	if (*stack->size_a == 3)
		sort_three(stack);
	else
		sort_five(stack);
	while (*stack->size_b)
		push_a(stack);
	if (stack->stack_a[0] > stack->stack_a[1])
		swap_a(stack, 1);
}
