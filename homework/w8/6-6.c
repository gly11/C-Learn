# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10][10] = {1};
    printf("1\n");
    for (int i = 1; i < 10; i++)
    {
        a[i][0] = 1;
        printf("1 ");
        for (int j = 1; j < 10; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
            if (a[i][j] && a[i][j] != 1)
            {
                printf("%d ", a[i][j]);
            } else if (a[i][j] == 1)
            {
                printf("1\n");
            }   
        }
    }
    return 0;
}

