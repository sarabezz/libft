/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:03:47 by sarabermude       #+#    #+#             */
/*   Updated: 2025/02/03 13:15:07 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char    *ft_itoa(int n)
{
    size_t  len;
    size_t i;
    char    *result;

    if (!s || !f)
        return (NULL);
    len = 0;
    while (s[len])
        len++;
    result = (char *)malloc(len + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (i < len)
    {
        restult[i] = f[i, s[i]];
        i++;
    }
    result[len] = '\0';
    return (result);
}