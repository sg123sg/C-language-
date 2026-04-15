#include<stdio.h>
int main()
{
    float r, a,c;
    printf("enter radius of circle: ");
    scanf("%f", &r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("area of circle = %f", a);
    printf("\ncircumference of circle = %f", c);
    return 0;
}