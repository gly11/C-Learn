// 汉诺塔问题
# include <stdio.h>

void hanoi(int, char, char, char);
void move(char, char);

int main(int argc, char const *argv[])
{
    int m=8;
    printf("Number of diskes:");
    // scanf("%d", &m);
    printf("%d\n", m);
    printf("Steps:\n");
    hanoi(m, 'A', 'B', 'C');
    return 0;
}

void hanoi(int n, char one, char two, char three) {
    // 将n个盘从one借助two移到three
    // printf("hanoi:%d\n", n);
    if (n == 1)
    {
        move(one, three);
    }
    else
    {
        hanoi(n-1, one, three, two);
        move(one, three);
        hanoi(n-1, two, one ,three);
    }
}

void move(char x, char y) {
    printf("%c-->%c\n", x, y);
}