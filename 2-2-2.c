#include<stdio.h>
int main()
{
    //freopen("input.txt", "rb", stdin);

    int a=0, b=0, c=0;
    while(scanf("%d", &a) == 1 && scanf("%d", &b) == 1 &&scanf("%d", &c) == 1)
    {
        int i = 10, ans = 0;
        for(i = 10; i <= 100; i++)
        {
            int x = i%3;if (x==0) x = 3;
            int y = i%5;if (y==0) y = 5;
            int z = i%7;if (z==0) z = 7;
            //if (i%5==0) printf("%d %d %d %d %d %d\n", a, b, c, x, y, z);
            if(a==x && b==y && c==z) { printf("%d\n", i); ans = 1; }
        }
        if (ans == 0) printf("No answer");
    }
    return 0;
}
