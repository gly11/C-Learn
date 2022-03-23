# include <stdio.h> 


int max(int, int, int);
void e3_6();
void e3_8();
void e4_4();


int max(int a, int b, int c) {
    return ( a>b && a > c) ? a : ( (b>c && b>a) ? b : c);
}

void e3_6( ) {
  char str[6] = "China";
  char *p = str;
  while ( *p+=4, *++p) ;
  printf("%s\n", str);
}


void e3_8( )
{
    char c1, c2;
    c1 = getchar();
    c2 = getchar();

    printf("用putchar输出语句:");
    
    putchar(c1);
    putchar(c2);

    putchar('\n');
    printf("用printf输出语句:%c%c\n", c1, c2);
}


void e4_4( )
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", max(a, b, c));
}



int main(int argc, char const *argv[])
{
    e3_6();
    e3_8();
    e4_4();
    return 0;
}
