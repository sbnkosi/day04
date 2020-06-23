/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:47:34 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/23 10:15:28 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int     ft_recursive_power(int nb, int power)
{
    int answer = 1;
    if(power < 1)
    {
        return 1;
    }
    else
    {
        answer = nb * ft_recursive_power(nb, (power - 1));
    }
    return answer;
}
