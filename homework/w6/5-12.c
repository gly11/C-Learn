# include <stdio.h>

int eat(int);

int main(int argc, char const *argv[])
{
    printf("%d", eat(10));
    return 0;
}

int eat(int n) {
    if (n>1)
    {
        return (eat(n-1)+1)*2;
    } else {
        return 1;
    }
    
}