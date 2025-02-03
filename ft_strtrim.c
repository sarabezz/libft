/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:47:01 by sarabermude       #+#    #+#             */
/*   Updated: 2025/02/03 12:56:31 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	ft_isin(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*p1;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	p1 = *s1;
	len = 0;
	while (*p1 && ft_isin(*p1, set))
		p1++;
	while (*p1++)
		len++;
	p1 -= len + 1;
	while (*p1 && ft_isin(*p1, set))
		p1++;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	while (*p1 && len--)
		*result++ = *p1++;
	*pr = '\0';
	return (result - len - 1);
}
