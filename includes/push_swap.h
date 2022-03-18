/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:51:51 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 15:54:27 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define DISPLAY_STATUS 0

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int	*numbers;
	int	*stack_a;
	int	*stack_b;
	int	a;
	int	b;
	int	*size_A;
	int	*size_B;
	int	*pivot;
}	t_stack;

void	output_a(t_stack *stack);
void	output_b(t_stack *stack);
void	output_pivot(t_stack *stack);
void	display_sorting(t_stack *stack, int display, int msg);

void	free_stacks(t_stack *stack);

void	push_swap(t_stack *stack);

void	move_down(int *stack, int size);
void	move_up(int *stack, int size);

void	swap(int *a, int *b);
void	swap_a(t_stack *stack, int msg);
void	swap_b(t_stack *stack, int msg);
void	swap_both(t_stack *stack);

void	rotate_a(t_stack *stack, int msg);
void	rotate_b(t_stack *stack, int msg);
void	rotate_both(t_stack *stack);

void	reverse_rotate_a(t_stack *stack, int msg);
void	reverse_rotate_b(t_stack *stack, int msg);
void	reverse_rotate_both(t_stack *stack);

void	push_a(t_stack *stack);
void	push_b(t_stack *stack);

int		check_if_one_arg(t_stack *stack, char *arguments);
int		check_if_more_arg(t_stack *stack, int count, char **arguments);

void	sort_three(t_stack *stack);
void	sort_five(t_stack *stack);
void	radix_sort(t_stack *stack, int max_bits, int max_size);

bool	check_arguments(char *arg);
bool	check_duplicate(int *stack, int stack_size);
bool	check_order(t_stack *stack);
bool	check_min_max_int(long int arg, t_stack *stack);

#endif
