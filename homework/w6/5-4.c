# include <stdio.h>

int main(int argc, char const *argv[])
{
    char a=0;
    int n_c = 0, n_s = 0, n_o = 0, n_n = 0;
    while ((a=getchar())!= '\n') {          // or EOF
        // a = getchar();
        if ((a >= 'a' && a <= 'z' ) || (a>='A' && a<='Z'))
        {
            n_c++;
        } else if (a <= '9' && a >= '0')
        {
            n_n++;
        }
         
        else if (a == ' ')
        {
            n_s++;
        } else
        {
            n_o++;
        }
    }
    printf("letter:%d\ndigit:%d\nspace:%d\nothers:%d\n", n_c, n_n, n_s, n_o);
    return 0;
}

