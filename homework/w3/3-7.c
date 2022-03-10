# include <stdio.h>
// # include <math.h>   // 使用math.h以获得更精确的pi值

# define M_PI 3.14      // 这里的M_PI与math.h中的常量同名

int main() {
    double r = 1.5, h = 3.0;
    double c, s, S, V, v;
    scanf("%lf %lf", &r, &h);
    c = M_PI*2*r;
    s = M_PI*r*r;
    S = M_PI*4*r*r;
    V = M_PI*4*r*r*r/3;
    v = s*h;
    // printf("%lf\n", M_PI);   // 检查使用的pi值
    printf("圆周长:%.2lf\n圆面积:%.2lf\n圆球表面积:%.2lf\n圆球体积:%.2lf\n圆柱体积:%.2lf\n", c, s, S, V, v);
    return 0;
}

// 本文件已通过清览题库在线测试