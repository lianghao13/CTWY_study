/*
 *以0.01为单位（步进）从0.0递增至1.0的循环（用整数控制）
*/

#include <stdio.h>

int main(void) {
    int i;
    float x;

    for (i = 0; i <= 1.0; i++) {
        x = (float)i / (float)100.0;
        printf("x = %f\n", x);
    }

    return(0);
}
