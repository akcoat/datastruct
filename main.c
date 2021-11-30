#include <stdio.h>
#include <math.h>
#include <time.h>

clock_t start,stop;
double duration;
void PrintN(int N){
    for (int i = 0; i < N; ++i) {
        printf("%d ",i);
    }
    return;
}
void PrintN2(int N){
    if (N){
        PrintN2(N-1);
        printf("%d ",N);
    }
    return;
}

/**
 *  计算多项式 f(x)  = a0 + a1x + ... + an-1xn-1 ..
 * @return
 */

double f (int n,double  a[],double  x)
{
    double p = a[0];
    for (int i = 0; i <= n; ++i) {
        p += (a[i] * pow(x,i));
    }
    return p;
}

double f2 (int n,double  a[],double  x)
{
    double p = a[n];
    for (int i = n; i > 0; i--) {
        p = x * p + a[i-1];
    }
    return p;
}


int main() {
//    printf("Hello, World!\n");
//    start = clock();
//    stop = clock();
//    duration = ((double )(stop - start))/CLK_TCK;
//    int a = 8;
    int *b ;
    printf("%d\n",b);
//    PrintN(a);
//    printf("\n");
//    PrintN2(a);
    return 0;
}



