*/int main() 
{
    char c = 'A';
    printf("%d", ft_isalpha(c));
    return 0;
}
/*


*/int main()
{
    char c = '5';
    printf("%d", ft_isdigit(c));
    return 0;
}/*


*/int main()
{
    char c = 'a';
    printf("%d", ft_isalnum(c));
    return 0;
}/*


*/int main()
{
    char c = 'A';
    printf("%d", ft_isascii(c));
    return 0;
}/*


*/int main()
{
    char c = ' ';
    printf("%d", ft_isprint(c));
    return 0;
}/*


*/int main()
{
    char str[] = "Hola, qué tal";
    printf("%d", ft_strlen(str));
    return 0;
}/*


*/int main()
{
    char str[50] = "Hola, qué tal";
    printf("%s", ft_memset(str, 'x', 5));
    return 0;
}/*


*/int main()
{
    char str[50] = "Hola, qué tal";
    printf("%s", ft_bzero(str, 5));
    return 0;
}/*


*/int main()
{
    char src[] = "Hola, qué tal";
    char dest[50];
    printf("%s", ft_memcpy(dest, src, ft_strlen(src) + 1));
    return 0;
}/*


*/int main()
{
    char str[] = "Hola, qué tal";
    printf("%s", ft_memmove(str + 7, str, 5));
    return 0;
}/*


*/int main()
{
    char src[] = "Hola, qué tal";
    char dest[50];
    printf("%s", ft_strlcpy(dest, src, sizeof(dest)));
    return 0;
}/*


*/int main()
{
    char src[] = " Hola ";
    char dest[50] = "Holaa, ";
    printf("%s", ft_strlcat(dest, src, sizeof(dest)));
    return 0;
}/*


*/int main()
{
    char c = 'hHUGj987a';
    printf("%c", ft_toupper(c));
    return 0;
}/*


*/int main()
{
    char c = 'duw299HjA';
    printf("%c", ft_tolower(c));
    return 0;
}/*


*/int main()
{
    char str[] = "Hola, qué tal";
    char *result = ft_strchr(str, 'o');
    printf("%s", result);
    return 0;
}/*


*/int main()
{
    char str[] = "Hola, qué tal";
    char *result = ft_strrchr(str, 'o');
    printf("%s", result);
    return 0;
}/*


*/int main()
{
    char str1[] = "Hola";
    char str2[] = "Holaaa";
    printf("%d", ft_strncmp(str1, str2, 4));
    return 0;
}/*


*/int main()
{
    char str[] = "Hola, qué tal";
    char *result = ft_memchr(str, 'o', ft_strlen(str));
    printf("%s", result);
    return 0;
}/*


*/int main()
{
    char str1[] = "Hola";
    char str2[] = "Holaaa";
    printf("%d", ft_memcmp(str1, str2, 4));
    return 0;
}/*


*/int main()
{
    char haystack[] = "Hola, qué tal";
    char needle[] = "qué";
    char *result = ft_strnstr(haystack, needle, ft_strlen(haystack));
    printf("%s", result);
    return 0;
}/*


*/int main()
{
    const char *str = "-12345";
    printf("%d", ft_atoi(str));
    return 0;
}/*


*/int main()
{
    int *arr = ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}/*


*/int main()
{
    char *str = ft_strdup("Hola, qué tal");
    printf("%s", str);
    free(str);
    return 0;
}/*


*/int main()
{
    char *str = "Hola, qué tal";
    char *substr = ft_substr(str, 0, 4);
    printf("%s", substr);
    free(substr);
    return 0;
}/*


*/int main()
{
    char *s1 = "Hola, ";
    char *s2 = "qué tal";
    char *str = ft_strjoin(s1, s2);
    printf("%s", str);
    free(str);
    return 0;
}/*


*/int main()
{
    char *str = "  Hola, qué tal  ";
    char *trimmed = ft_strtrim(str, " ");
    printf("%s", trimmed);
    free(trimmed);
    return 0;
}/*


*/int main()
{
    int i;
    char *str = "Hola, qué tal";
    char **split = ft_split(str, ' ');

    i = 0;
    while (split[i] != NULL) {
        printf("%s\n", split[i]);
        free(split[i]);
        i++;
    }
    free(split);
    return 0;
}/*


*/int main()
{
    int n = -12345;
    char *str = ft_itoa(n);
    printf("%s", str);
    free(str);
    return 0;
}/*


*/int main()
{
    char *str = "Hola, qué tal";
    char *result = ft_strmapi(str, ft_toupper);
    printf("%s", result);
    free(result);
    return 0;
}/*


*/int main()
{
    char str[] = "Hola, qué tal";
    ft_striteri(str, ft_toupper);
    printf("%s", str);
    return 0;
}/*


*/int main()
{
    char c = 'H';
    ft_putchar_fd(c, 1); // 1 es el descriptor para la salida estándar (stdout)
    return 0;
}/*


*/int main()
{
    char *str = "Hola, qué tal";
    ft_putstr_fd(str, 1); // 1 es el descriptor para la salida estándar (stdout)
    return 0;
}/*


*/int main()
{
    char *str = "Hola, qué tal";
    ft_putendl_fd(str, 1); // 1 es el descriptor para la salida estándar (stdout)
    return 0;
}/*


*/int main()
{
    int n = 12345;
    ft_putnbr_fd(n, 1); // 1 es el descriptor para la salida estándar (stdout)
    return 0;
}/*



