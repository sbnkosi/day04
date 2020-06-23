/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:46:10 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/23 08:52:38 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_iterative_power(int nb, int power)
{
    int answer = 1;
    if(power > 0)
    {
        while(power > 0)
        {
            answer *= nb;
            power--;
        }
    }
    else
    {
        return 0;
    }
}
