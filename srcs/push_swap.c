/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:12:09 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 15:46:25 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_stack *stack)
{
	check_duplicate(stack->stack_a, *stack->size_A);
	if (check_order(stack))
		display_sorting(stack, DISPLAY_STATUS, 0);
	else
	{
		display_sorting(stack, DISPLAY_STATUS, 0);
		if (*stack->size_A <= 3)
			sort_three(stack);
		else if (*stack->size_A <= 5)
			sort_five(stack);
		else if (*stack->size_A > 5)
			radix_sort(stack, 0, *stack->size_A);
		if (check_order(stack) && *stack->size_B == 0)
			display_sorting(stack, DISPLAY_STATUS, 2);
		else
			display_sorting(stack, DISPLAY_STATUS, 1);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int			count;

	count = 0;
	if (argc <= 1)
		return (0);
	stack = malloc(sizeof(t_stack));
	stack->b = 0;
	if (!stack)
		return (0);
	if (argc == 2)
		stack->a = check_if_one_arg(stack, argv[argc - 1]);
	else if (argc >= 3)
		stack->a = check_if_more_arg(stack, argc, argv);
	stack->size_A = &stack->a;
	stack->size_B = &stack->b;
	stack->pivot = &count;
	push_swap(stack);
	free_stacks(stack);
	return (0);
}
