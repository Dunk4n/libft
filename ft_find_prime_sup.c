/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_find_prime_sup.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:12:35 by niduches          #+#    #+#             */
/*   Updated: 2019/10/10 15:14:42 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	my_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int			my_find_prime_sup(int nb)
{
	int i;

	i = 0;
	while (my_prime(nb + i) == 0)
		i++;
	return (nb + i);
}
