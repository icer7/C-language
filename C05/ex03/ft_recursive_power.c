/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 23:46:45 by rysato            #+#    #+#             */
/*   Updated: 2020/08/11 23:46:51 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_recursive(int number, int power, int result)
{
	if (power-- > 0)
		return (ft_recursive_power_recursive(number, power, result *= number));
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_recursive_power_recursive(nb, power, 1));
}
