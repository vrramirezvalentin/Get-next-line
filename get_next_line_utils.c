#include "get_next_line.h"

void ft_bzero(void *s, size_t n){
    unsigned char *p = s;
    unsigned char c = '\0';
    unsigned i = 0;

    while(i<n){
        p[i]=c;
        i++;
    }
}

size_t ft_strlen(const char *s){
    size_t i;
    i = 0;
    
    while(s[i])
        i++;
    return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    int i;
    i = 0;

    if(!s1 || !s2)
        return NULL;
    len = ft_strlen(s1) + ft_strlen(s2);

    char *sjoin = malloc(sizeof(char) * (len) + 1);
    if(sjoin == NULL)
        return NULL;
    ft_bzero(sjoin, len+1);
    while(*s1)
    {
        sjoin[i] = *s1;
        s1++;
        i++;
    }
    while(*s2)
    {
        sjoin[i] = *s2;
        s2++;
        i++;
    }
    return sjoin;
} 

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    unsigned char uc = (unsigned char) c;  

    while(s[i]){
        if(s[i] == uc)
            return (char *)&s[i]; 
        i++;
    }

    if(s[i] == uc){               
        return (char *)&s[i];
    }

    return NULL;                  
}
void *ft_memcpy(void *dest, const void *src, size_t n){
    unsigned const char *pSRC = src;
    unsigned char *pDEST = dest;
    unsigned int i = 0;

    while(i<n){
        pDEST[i] = pSRC[i];     
        i++;
    }
    return pDEST;
}
