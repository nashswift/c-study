#include <stdio.h>
#include <float.h>
int main(void)
{
    double m = 1.0 / 3.0;
    float n = 1.0 / 3.0;

    printf("%.6f %.6f\n", m, n);
    printf("%.12f %.12f\n", m, n);
    printf("%.16f %.16f\n", m, n);
    printf("FLT_DIG:%d\n", FLT_DIG);
    printf("DBL_DIG:%d\n",DBL_DIG);

    return 0;
}