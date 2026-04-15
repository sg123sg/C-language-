#include<stdio.h>
int main()
{
    float p, r, t, s, c, a, i, n, n1=1;
    printf("enter principal amount: ");
    scanf("%f", &p);
    printf("enter time period: ");
    scanf("%f", &t);
    printf("enter rate of interest: ");
    scanf("%f" , &r);
    s=(p*r*t)/100;
    n=1+(r/100);
    for(i=1; i<=t; i++)
    {
        n1=n1*n;
    }
    a=p*n1;
    c=a-p;
    printf("simple interest = %f" , s);
    printf("\n compound interest = %f" , c);
}