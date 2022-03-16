# include <stdio.h>

int main(int argc, char const *argv[])
{
    char c1, c2;
    c1 = getchar();
    c2 = getchar();

    
    printf("用putchar输出语句:");
    
    putchar(c1);
    putchar(c2);

    putchar('\n');
    printf("用printf输出语句:%c%c", c1, c2);
    return 0;
}
