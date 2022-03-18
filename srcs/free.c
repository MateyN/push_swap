/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:13:32 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 15:41:43 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stacks(t_stack *stack)
{
	if (stack)
	{
		free(stack->numbers);
		free(stack->stack_a);
		free(stack->stack_b);
		free(stack);
	}
}
