
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:21:01 by sarabermude       #+#    #+#             */
/*   Updated: 2025/02/03 11:21:01 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;
	size_t i;
	size_t final_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	final_len = ft_strlen(s) - start;
	if (final_len > len)
		final_len = len;
	result = (char *)malloc(final_len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < final_len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[final_len] = '\0';

	return (result)	
}

#include <stdio.h>

int main() {
    char *original = "Hola, mundo!";
    char *sub = ft_substr(original, 7, 5); // "mundo"

    printf("Subcadena: %s\n", sub);

    free(sub); // No olvides liberar memoria
    return 0;
}
