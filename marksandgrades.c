#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, s;
    float p;
    printf("enter marks of subjects 1: ");
    scanf("%d", &m1);
    printf("enter marks of subjects 2: ");
    scanf("%d", &m2);
    printf("enter marks of subjects 3: ");
    scanf("%d", &m3);
    printf("enter marks of subjects 4: ");
    scanf("%d", &m4);
    printf("enter marks of subjects 5: ");
    scanf("%d", &m5);
    s = m1 + m2 + m3 + m4 + m5;
    p = (float)s / 5;
    printf("total marks: %d", s);
    printf("\npercentage: %f", p);
    if (p>90)
    printf("\ngrade: A");
    else if(p>80)
    printf("\n grade: B");
    else if(p>60)
    printf("\n grade: C");
    else
    printf("\n grade: D");
    return 0;
}