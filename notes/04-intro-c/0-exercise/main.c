#include <stdio.h>

int main() {
    
    int h, t, d;

    for (int i = 100; i <= 999; i++) {
        h = i/100;
        t = (i - (h*100))/10;
        d = (i - (h*100 + t*10));
        if (i == (h*h*h + t*t*t + d*d*d)) {
            printf("value = %d ", i);
        }
    }
    return(0);
}
