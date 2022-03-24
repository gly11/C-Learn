# include <stdio.h>


int main(int argc, char const *argv[])
{
    char str[5];
    int i=-1;
    while ( i++, (str[i]=getchar()) != '\n') ;             // 本地测试时用 !='\n'，线上测试时用EOF
    str[i] = '\n';
    printf("位数:%d\n", i);

    int j = 0;
    printf("每位数字为:");
    while ( str[++j] != '\n')
    {
        putchar(str[j-1]);
        printf(",");
    }
    printf("%c\n", str[--j]);

    printf("反序数字为:");
    while (putchar(str[j]), j-->0);

    
    return 0;
}
