/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:29:40 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 18:03:19 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    push_a(t_stack *stack)
{
    int temp;

    temp = stack->stack_b[0];
    if (*stack->size_b > 0)
    {
        move_down(stack->stack_a, *stack->size_a);
        *stack->pivot = *stack->pivot + 1;
        *stack->size_a = *stack->size_a + 1;
        *stack->size_b = *stack->size_b - 1;
        move_up(stack->stack_b, *stack->size_b);
        stack->stack_a[0] = temp;
    }
    ft_putendl_fd("pa", 1);
}

void    push_b(t_stack *stack)
{
    int temp;
    
    temp = stack->stack_a[0];
    if (*stack->size_a > 0)
    {
        move_up(stack->stack_a, *stack->size_a);
        *stack->pivot = *stack->pivot + 1;
        *stack->size_b = *stack->size_b + 1;
        *stack->size_a = *stack->size_a - 1;
        move_down(stack->stack_b, *stack->size_b);
        stack->stack_b[0] = temp;
    }
    ft_putendl_fd("pb", 1);
}
