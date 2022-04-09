# include <stdio.h>


void circling(int x) {
    int y = (x+1)/2;
    for (int i = 1; i <= y; i++)
    {
        for (int j = 1;j<=y-i; j++) {
            putchar(' ');
        }
        for (int j = 1;j<2*i;j++) {
            putchar('*');
        }
        putchar('\n');
    }
    
    for (int i = 1; i < y; i++)
    {
        for (int j = 1;j<=i; j++) {
            putchar(' ');
        }
        for (int j = 1;j<x+1-2*i;j++) {
            putchar('*');
        }
        putchar('\n');
    }
    
}

void array() {
    char a[7][7] = {
        {' ', ' ', ' ', '*'}, 
        {' ', ' ', '*', '*', '*'}, 
        {' ', '*', '*', '*', '*', '*'}, 
        {'*', '*', '*', '*','*', '*', '*'}, 
        {' ', '*', '*', '*', '*', '*'},
        {' ', ' ', '*', '*', '*'}, 
        {' ', ' ', ' ', '*'}, 
    };
    for (int i=0; i<7; i++) {
        for (int j = 0; j < 7; j++)
        {
            putchar(a[i][j]);
        }
        putchar('\n');
    }
}


int main(int argc, char const *argv[])
{
    circling(7);
    putchar('\n');
    array();
    return 0;
}
