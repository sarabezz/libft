#include "libft.h"
#include <stddef.h>
#include <string.h> 
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    size_t len;
    char *dup;

    len = t_strlen(s) + 1;
    dup = (char *)ft_malloc(len);
    if (dup == NULL)
        return NULL;

    for (size_t i = 0; i < len; i++)
        dup[i] = s[i];

    return dup;
}