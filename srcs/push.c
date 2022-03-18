/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:29:40 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 15:31:10 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    push_a(t_stack *stack)
 {
     int temp;

     temp = stack->stack_b[0];
     if (*stack->size_B > 0)
     {
         move_down(stack->stack_a, *stack->size_A);
         *stack->pivot += 1;
         *stack->size_A += 1;
         *stack->size_B -= 1;
         move_up(stack->stack_b, *stack->size_B);
         stack->stack_a[0] = temp;
     }
     ft_putendl_fd("pa", 1);
 }

 void    push_b(t_stack *stack)
 {
     int temp;

     temp = stack->stack_a[0];
     if (*stack->size_A > 0)
     {
         move_up(stack->stack_a, *stack->size_A);
         *stack->pivot += 1;
         *stack->size_B += 1;
         *stack->size_A -= 1;
         move_down(stack->stack_b, *stack->size_B);
         stack->stack_b[0] = temp;
     }
     ft_putendl_fd("pb", 1);
 }
