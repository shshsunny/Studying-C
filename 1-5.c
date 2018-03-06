#include<stdio.h>
int main()
{
    int a;
    const int price = 95;
    scanf("%d", &a);
    if (price * a >= 300)
        printf("%.2f\n", (double)price * a * 8.5 / 10.00);
    else
        printf("%.2f\n", (double)price * a);
    return 0;
}
