#include <stdio.h>
int main()
{
    int m1, m2, m3 ,m4, m5, s ,p;
    printf("enter marks of subject 1: ");
    scanf("%d",&m1);
    printf("enter marks of subject 2: ");
    scanf("%d",&m2);
    printf("enter marks of subject 3: ");
    scanf("%d",&m3);
    printf("enter marks of subject 4: ");
    scanf("%d",&m4);
    printf("enter marks of subject 5: ");
    scanf("%d",&m5);
    s = m1 + m2 + m3 + m4 + m5;
    p = s/5;
    printf("total marks = %d", s);
    printf("\npercentage = %d", p);
    
    return 0;
}