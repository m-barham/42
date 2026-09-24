#include <stdio.h>

int ft_isalpha(int c){
    return (c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'); 
}

int ft_isdigit(int c){

    return (c >= 0 && c <= '9');
   
}

int ft_isalnum(int c){
    return (ft_isdigit(c) || ft_isalpha(c));
}

int ft_isascii(int c){
    return c >= 0 && c <= 127;
}

int ft_isprint(int c){
    return (c >= 0 && c < 32) || c == 127;
}

int ft_strlen (char *c){

    int i = 0;

    while (*c != '\0')
    {
        i++;
        *c++;
    }
    return i;
}

void * ft_memset (void *ptr , int x , size_t n){

    char *p;

    p =(char *) ptr;
    while (n > 0)
    {
        *p = x;
        p++;
        n--;
    }
    
    return (ptr);
}

void ft_bzero(void *s, size_t n) {
    ft_memset(s, 0, n);
}

void *ft_memcpy (void *dest, void *src, size_t n){

    char *s;
    char *d;

    s = (char *)src;
    d = (char *) dest;
    while (n > 0)
    {
        *d = *s;
        d++;
        s++;
        n--;

    }
    return dest;
}

void *ft_memmove(void *dest ,const void *src, size_t n){
    char *d;
    const  char *s;
    size_t i;

    d = (char *) dest;
    s = (char *) src;
    if (d < s)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else if (d > s)
    {
        i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return dest;
}

size_t ft_strlcpy (char *dst, const char *src, size_t dsize){

    size_t len;

    len = ft_strlen(src);

    while (dsize > 1 && *src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
        dsize--;
    }
    *dst = '\0';
    return len;

}

size_t ft_strlcat (char *dst, const char *src, size_t size){

    size_t dst_le;
    size_t src_le;
    
    dst_le = ft_strlen(dst);
    src_le = ft_strlen(src);
    if (size <= dst_le)
        return dst_le + src_le;

    while ((dst_le < (size - 1)) && *src != '\0')
    {
        dst[dst_le] = *src;
        src++;
        dst_le++;;
    }
    dst[dst_le] = '\0';
    
    return dst_le + src_le;
}
