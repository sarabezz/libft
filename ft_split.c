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

static int	ft_count(char const *s, char c)
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

static char	*ft_words(char const *s, char c, int *index)
{
	int		i;
	int		start;
	char    *result;

	i = *index;
	while (s[i] == c && s[i] != '\0')
		i++;
	start = i;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (start == i)
		return (NULL);
	result  = ft_substr(s, start, i - start);
	if (!result)
		return (NULL);
	*index = i;
    return (result);
}


char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_count(s, c);
	result = (char **)malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < len)
	{
		result[j] = ft_words(s, c, &i);
		if (!result[j])
		{
			while (j > 0)
				free(result[--j]);
			free(result);
			return(NULL);
		}
		j++;
	}
	result[i] = NULL;
	return (result);
}
