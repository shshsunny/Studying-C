#include<stdio.h>

int main()
{
    int f;double c;
    scanf("%d", &f);
    printf("%d\n", f);
    c = (double)5*(f-32)/9;
    //printf("%.3f\n", output);
    printf("%.3f\n", c);
    return 0;
}
