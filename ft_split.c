/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 09:15:31 by niduches          #+#    #+#             */
/*   Updated: 2019/10/10 19:59:15 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	cnt_word(char *str, char c)
{
	int	i;
	int	nb;

	nb = 0;
	if (str[0] && str[0] != c)
		nb++;
	i = 1;
	while (str[i])
	{
		if (str[i] != c && str[i - 1] == c)
			nb++;
		i++;
	}
	return (nb);
}

static int	fill_up_array(char *str, char c, char **array, int *j)
{
	int		k;

	while (str[*j] && str[*j] == c)
		(*j)++;
	k = 0;
	while (str[*j + k] && str[*j + k] != c)
		k++;
	if (!(*array = malloc(sizeof(char) * (k + 1))))
		return (1);
	k = 0;
	while (str[*j] && str[*j] != c)
		(*array)[k++] = str[(*j)++];
	(*array)[k] = '\0';
	return (0);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		nb_word;
	char	**array;

	if (!s)
		return (NULL);
	nb_word = cnt_word((char*)s, c);
	if (!(array = malloc(sizeof(char*) * (nb_word + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < nb_word)
		if (fill_up_array((char*)s, c, &array[i++], &j))
		{
			while (--i > 0)
				free(array[i - 1]);
			free(array);
			return (NULL);
		}
	array[i] = NULL;
	return (array);
}
