/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:41:32 by mnikolov          #+#    #+#             */
/*   Updated: 2022/03/23 20:04:39 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	move_up(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack[i] = stack[i + 1];
		i++;
	}
}

void	move_down(int *stack, int size)
{
	while (size > 0)
	{
		stack[size] = stack[size - 1];
		size--;
	}
}
