#include<stdio.h>
int main()
{
    /*
    int n;
    for(n = 7; n!= 0; n--)
        printf("n = %d", n--);
    */

    int a = 10;
    int b = 5;
    int c = 10;
    if((a >b) && (a <=c)) {
        a = a+1;
    } else {
        c = c+1;
    }

    printf("a = %d, b = %d, c = %d", a, b, c);

    return 0;
}
