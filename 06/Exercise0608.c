/* 
    将数组各元素的值进行倒序排列
*/

#include <stdio.h>

#define NUMBER 4
/*---把no个元素的数组vc进行倒序排列---*/
void rev_intary(int vc[], int no) {
    int i, tmp;

    if (no % 2) {
       int count = (no - 1) / 2;
       for (i = 0; i < count; ++i) {
           tmp = vc[i];
           vc[i] = vc[no - 1 - i];
           vc[no - 1 - i] = tmp;
       }
    }
    else {
       int count = no / 2;
       for (i = 0; i < count; ++i) {
           tmp = vc[i];
           vc[i] = vc[no - 1 - i];
           vc[no - 1 - i] = tmp;
       }
    }
}

int main(void) {
    int i;
    int ary1[NUMBER];
    int ary2[NUMBER];
    
    printf("请给有%d个元素的数组赋整数值。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        int c_scanf;
        printf("ary1[%d]:", i);       scanf("%d", &ary1[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
    }

    for (i = 0; i < NUMBER; ++i) {
        ary2[i] = ary1[i];
    }

    puts("变换前的数组各元素。");
    for (i = 0; i < NUMBER; i++) printf("ary2[%d] = %d\n", i, ary2[i]);
    
    rev_intary(ary1, NUMBER);

    puts("变换后的数组各元素。");
    for (i = 0; i < NUMBER; i++) printf("ary1[%d] = %d\n", i, ary1[i]);

    return(0);
}
