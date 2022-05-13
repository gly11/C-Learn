# include <stdio.h>

const int len = 100;

int mystrcmp(const char *s1, const char *s2) {
    while ( *s1++ == *s2++ && *s1 != '\0');
    return *--s1 - *--s2;
}

int main(int argc, char const *argv[])
{
    char s1[len], s2[len];
    gets(s1);
    gets(s2);
    printf("%d", mystrcmp(s1, s2));
    return 0;
}
