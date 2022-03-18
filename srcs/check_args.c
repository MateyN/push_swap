/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:03:55 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/18 16:03:56 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	count_down(int n, int *nums, int lenght)
{
	int	i;
	int	res;

	i = -1;
	res = 0;
	while (++i < lenght)
		if (n >= nums[i])
			res++;
	return (res);
}

int	*put_char_to_int(int *nums, int lenght)
{
	int	*number;
	int	i;

	i = -1;
	number = (int *)malloc(lenght * sizeof(int));
	if (!number)
		return (NULL);
	while (++i < lenght)
		number[i] = count_down(nums[i], nums, lenght);
	return (number);
}

int	check_if_one_arg(t_stack *stack, char *arguments)
{
	char	**split;
	int		i;
	int		j;
	int		num;

	i = -1;
	check_arguments(arguments);
	split = ft_split(arguments, ' ');
	while (split[++i])
		;
	stack->numbers = (int *)malloc(i * sizeof(int));
	stack->stack_b = (int *)malloc(i * sizeof(int));
	j = -1;
	while (++j < i)
	{
		check_min_max_int(ft_atoi(split[j]), stack);
		num = ft_atoi(split[j]);
		stack->numbers[j] = num;
	}
	stack->stack_a = put_char_to_int(stack->numbers, i);
	j = -1;
	while (split[++j])
		free(split[j]);
	free(split);
	return (i);
}

int	check_if_more_arg(t_stack *stack, int count, char **arguments)
{
	int	num;
	int	i;
	int	j;

	i = count - 1;
	stack->numbers = (int *)malloc(i * sizeof(int));
	stack->stack_b = (int *)malloc(i * sizeof(int));
	j = -1;
	while (++j < i)
	{
		check_arguments(arguments[j + 1]);
		check_min_max_int(ft_atoi(arguments[j + 1]), stack);
		num = ft_atoi(arguments[j + 1]);
		stack->numbers[j] = num;
	}
	stack->stack_a = put_char_to_int(stack->numbers, i);
	return (i);
}
