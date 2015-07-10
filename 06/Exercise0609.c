/* 
    将数组各元素的值进行倒序排列
*/

#include <stdio.h>

#define NUMBER 4
/*---把no个元素的数组v2进行倒序排列，并将结果保存在数组v1中---*/
void intary_rcpy(int v1[], const int *v2, int no) {
    int i, tmp;

    for (i = 0; i < no; ++i)    v1[i] = v2[i];

    if (no % 2) {
       int count = (no - 1) / 2;
       for (i = 0; i < count; ++i) {
           tmp = v1[i];
           v1[i] = v1[no - 1 - i];
           v1[no - 1 - i] = tmp;
       }
    }
    else {
       int count = no / 2;
       for (i = 0; i < count; ++i) {
           tmp = v1[i];
           v1[i] = v1[no - 1 - i];
           v1[no - 1 - i] = tmp;
       }
    }
}

int main(void) {
    int i;
    int ary1[NUMBER];
    int ary2[NUMBER];
    
    puts("下面演示把数组ary2传入ary1中，并在ary1中进行倒序排列。");
    printf("请给有%d个元素的数组ary2赋整数值。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        int cln_buf;
        printf("ary2[%d]:", i);       scanf("%d", &ary2[i]);
        while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
            ;
    }

    intary_rcpy(ary1, ary2, NUMBER);

    puts("变换后的数组ary1各元素。");
    for (i = 0; i < NUMBER; i++) printf("ary1[%d] = %d\n", i, ary1[i]);

    puts("变换后的数组ary2各元素。");
    for (i = 0; i < NUMBER; i++) printf("ary2[%d] = %d\n", i, ary2[i]);

    return(0);
}
