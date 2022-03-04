# include <stdio.h>

double f(double a, double r, double n) {
    double p = 0;
    p = a*(1+r*n);
    return p;
}

int main() {
    const double a=1000.0;     // 本金
    const double r0 = 0.0035, r1 = 0.015, r2 = 0.021, r3 = 0.0275, r5 = 0.03;
    double p = 0;

    // 一次存5年
    p = f(a, r5, 5.0);
    printf("p1=%.6lf\n", p);

    // 2 + 3
    p = f(f(a, r2, 2.0), r3, 3.0);
    printf("p2=%.6lf\n", p);

    // 3 + 2
    p = f(f(a, r3, 3.0), r2, 2.0);
    printf("p3=%.6lf\n", p);

    // 连续5次1年
    p = a;
    for (int i = 0; i< 5; i++) {
        p = f(p, r1, 1.0);
    }
    printf("p4=%.6lf\n", p);

    // 活期存款
    p = a;
    for (int i = 0; i < 5*4; i++) {     // 结息5*4=20次
        p = f(p, r0, 0.25);
    }
    printf("p5=%.6lf\n", p);
    
    return 0;
}

