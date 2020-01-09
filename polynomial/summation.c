#include <stdio.h>
#include <math.h>

double f1(int n, double a[], double x) {
    int i;
    double p = a[0];

    for (i = 1; i <= n; i++)
        p += (a[i]*pow(x, i));

    return p;
}

double f2(int n, double a[], double x) {
    int i;
    double p = a[n];

    for (i = 1; i <= n; i++)
        p += a[i-1] + x*p;

    return p;
}
