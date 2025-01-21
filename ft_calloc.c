#include "libft.h"
#include <stddef.h>
#include <unistd.h>


void *ft_calloc(size_t nmemb, size_t size)
{
    void *p;
    
    if (nmemb == 0 || size == 0)
    {
        ptr = malloc(0); 
        if (ptr != NULL)
            return ptr;
        return NULL;
    }
    
    p = ft_malloc(num * size);
    if (p == NULL)
        return NULL;
        
    ft_memset(p, 0, num * size);
    
    return p;
}


