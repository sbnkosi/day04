/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:44:50 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/23 08:51:09 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_recursive_factorial(int nb)
{
    int recurs = 1;
    if(nb == 1)
    {
     return 1;
    }
    else
    {
        recurs = nb * ft_recursive_factorial(nb -1);
    }
    return recurs;
}
