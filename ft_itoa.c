/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:03:47 by sarabermude       #+#    #+#             */
/*   Updated: 2025/02/03 15:19:32 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
    int		len;
    char	*str;
	long	num;

	len = get_len(n);
	str = (char *)malloc(len + 1);
    if (!str)
        return NULL;
    num = n;
    str[len] = '\0';
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    while (num > 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }
    if (n == 0)
        str[0] = '0';
    return str;
}
