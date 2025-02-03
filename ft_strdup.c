
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
    char *dup;

    if (!s) // Comprobamos que s no sea NULL
        return NULL;

    len = ft_strlen(s) + 1; // +1 para incluir el '\0'
    dup = (char *)malloc(len);
    if (!dup)
        return NULL;

    ft_memcpy(dup, s, len); // Copiamos la cadena incluyendo el '\0'
    
    return dup;
}
