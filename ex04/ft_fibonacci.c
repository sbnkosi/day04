/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:18:05 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/23 10:23:00 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if(index < 0)
	{
		return (-1);
	}
	else if(index <= 1)
	{
		return index;
	}
	else
	{
		return ft_fibonacci(index -1) + ft_fibonacci(index - 2);
	}
}
