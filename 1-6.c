#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a <= 0 || b <= 0 || c <= 0)
        printf("not a triangle\n");
    else if (a+b <= c || a+c <= b || b+c <= a)
        printf("no\n");
    else
        printf("yes\n");

}
