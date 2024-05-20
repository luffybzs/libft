#include <stdio.h>
#include <string.h

// Implémentation de ft_memset
void *ft_memset(void *s, int c, size_t n) {
    unsigned char *ptr = s;
    unsigned char uc = c;

    while (n-- > 0) {
        *ptr++ = uc;
    }
    return s;
}

int main() {
    char str[20];
    size_t len = 10;
    int value = 'A';

    // Utilisation de la fonction standard memset
    memset(str, value, len);
    printf("memset: %s\n", str);

    // Utilisation de la fonction ft_memset
    ft_memset(str, value, len);
    printf("ft_memset: %s\n", str);

    return 0;
}