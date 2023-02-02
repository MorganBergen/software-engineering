#include<stdio.h>
int main()
{
   
    int a = 10;
    int b = 5;
    int c = 10;

    printf("%d", (a++));

    int j = 1;
    int num = 4;
    while (++j <= 10) {
        num++;
    }
    printf("%d", num);

    for (int j = 1; j <= 10; j = j -1) {
        printf("%d", j);
    }

    return 0;
}
