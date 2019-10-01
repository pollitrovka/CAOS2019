#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int
main(int argc, char* argv[]) {
    uint32_t x_27 = strtol(argv[1], NULL, 27);
    double x;
    uint32_t x_16;
    scanf("%lf %x", &x, &x_16);
    printf("%.3lf", x_27 + x + x_16);
    return 0;
}
