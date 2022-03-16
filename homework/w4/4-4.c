# include <stdio.h>

int max(int, int, int);


int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", max(a, b, c));
    return 0;
}

int max(int a, int b, int c) {
    if (a>b && a > c) {
        return a;
    }
    else if (b>c && b>a) {
        return b;
    }
    else {
        return c;
    }
}
