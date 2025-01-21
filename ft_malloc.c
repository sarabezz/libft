#include "libft.h"
#include <stddef.h>

void *ft_malloc(size_t size)
{
    void *p;
    
    p = sbrk(size); // Solicita un bloque de memoria al sistema operativo
    if (p == (void *)-1)
        return (NULL);
    return (p);
}
