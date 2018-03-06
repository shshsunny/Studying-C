#include<stdio.h>
int main()
{
    //重定向为文件I/O
    freopen("input.txt", "rb", stdin);
    //freopen("output.txt", "wb", stdout);
    int a = 0, b = 0, c = 0;

    //scanf("%d", &a) == 1&&scanf("%d", &b) == 1&&scanf("%d", &c) == 1
    while(scanf("%d%d%d", &a, &b, &c) == 1)
    {
    int i = 0;
    //printf("%d %d %d %d", i, a, b, c);
    for (i = 10; i <= 100; i++){
        printf("%d\n", &i);
        if ((i%3==a || i%3+3==a) && (i%5==b || i%5+5==b) && (i%7==c || i%7+7==c)){
            printf("%d\n", &i);
            }
        }
    }
    return 0;
}
