#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

int i, j, k, x, y, o, N;
int main() {

    time_t start_time = time(NULL);
    float elapsed_time;
    float max_time = 5.0f; // Set the maximum running time to 5 seconds

    float a, c, d, e, f, g, h, G, H, A, t, D;
    float z[1760];
    #define R(t, x, y) f = x; x -= t * y; y += t * f; f = (3 - x * x - y * y) / 2; x *= f; y *= f;
    e = 1, c = 1, d = 0;
    char b[1760];
    for (;;) {
        elapsed_time = difftime(time(NULL), start_time);
        if (elapsed_time >= max_time) {
            break;
        }

        memset(b, 32, 1760);
        g = 0, h = 1;
        memset(z, 0, 7040);
        for (j = 0; j < 90; j++) {
            G = 0, H = 1;
            for (i = 0; i < 314; i++) {
                A = h + 2, D = 1 / (G * A * a + g * e + 5);
                t = G * A * e - g * a;
                x = 40 + 30 * D * (H * A * d - t * c);
                y = 12 + 15 * D * (H * A * c + t * d);
                o = x + 80 * y;
                N = 8 * ((g * a - G * h * e) * d - G * h * a - g * e - H * h * c);
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = (N > 0 ? N : 0)[".,-~:;=!*#$@"];
                }
                R(.02, H, G);
            }
            R(.07, h, g);
        }
        for (k = 0; 1761 > k; k++) putchar(k % 80 ? b[k] : 10);
        R(.04, e, a);
        R(.02, d, c);
        usleep(15000);
        printf("\n%s", " donut.c! \x1b[23A");
    }
}

