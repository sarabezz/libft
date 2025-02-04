
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:20:40 by sarabermude       #+#    #+#             */
/*   Updated: 2025/02/03 11:20:40 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> 
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	size_t len;
	char *result;

	if (!s)
		return NULL;
	len = ft_strlen(s) + 1;
	result = (char *)malloc(len);
	if (!result)
		return NULL;
	ft_memcpy(result, s, len);
	return result;
}
