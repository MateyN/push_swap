/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:51:51 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 17:55:14 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int	a;
	int	b;
	int	*stack_a;
	int	*stack_b;
	int	*size_a;
	int	*size_b;
	int	*pivot;
	int	*numbers;
}	t_stack;

/*-------- OUTPUT --------*/
void	output_a(t_stack *stack);
void	output_b(t_stack *stack);
void	output_pivot(t_stack *stack);
void	output_sorting(t_stack *stack, int output, int msg);

/*-------- FREE --------*/
void	free_stacks(t_stack *stack);

/*-------- PUSH_SWAP MAIN --------*/
void	push_swap(t_stack *stack);

/*-------- OPERATIONS UTILS --------*/
void	move_down(int *stack, int size);
void	move_up(int *stack, int size);

/*-------- SWAP --------*/
void	swap(int *a, int *b);
void	swap_a(t_stack *stack, int msg);
void	swap_b(t_stack *stack, int msg);
void	swap_both(t_stack *stack);

/*-------- ROTATE --------*/
void	rotate_a(t_stack *stack, int msg);
void	rotate_b(t_stack *stack, int msg);
void	rotate_both(t_stack *stack);

/*-------- REVERSE ROTATE --------*/
void	reverse_rotate_a(t_stack *stack, int msg);
void	reverse_rotate_b(t_stack *stack, int msg);
void	reverse_rotate_both(t_stack *stack);

/*-------- PUSH --------*/
void	push_a(t_stack *stack);
void	push_b(t_stack *stack);

/*-------- CHECK ARGUMENTS --------*/
int		check_if_one_arg(t_stack *stack, char *arguments);
int		check_if_more_arg(t_stack *stack, int count, char **arguments);

/*-------- RADIX SORT --------*/
void	sort_three(t_stack *stack);
void	sort_five(t_stack *stack);
void	radix_sort(t_stack *stack, int max_bits, int max_size);

/*-------- CHECK ARGUMENTS UTILS --------*/
int		check_arguments(char *arg);
int		check_duplicate(int *stack, int stack_size);
int		check_order(t_stack *stack);
int		check_min_max_int(int arg, t_stack *stack);

#endif
