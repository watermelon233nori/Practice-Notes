#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f",&a,&b,&c);
    float p = (a+b+c)/2;
    printf("%.1f",sqrt(p * (p-a)*(p-b)*(p-c)));
    return 0;
}