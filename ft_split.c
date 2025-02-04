/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:57:32 by sarabermude       #+#    #+#             */
/*   Updated: 2025/02/04 07:51:15 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	ft_count(char const *s, char c)
{
	int	count;
	
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		num;
	int		i;
	char	**result;
	
	num = ft_count(s, c);
	result = malloc(sizeof(char*)*(num + 1));
	i = 0;
	while (*s)
	{

	}
}