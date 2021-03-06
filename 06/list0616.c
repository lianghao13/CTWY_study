/*
    顺序查找（哨兵查找法，第二版）
*/

#include <stdio.h>

#define NUMBER  5
#define FAILED  -1

/*---通过哨兵查找法顺序查找，使用for语句和空语句---*/
int search(int vc[], int key, int no) {
    int i = 0;
    vc[no] = key;                        /*添加哨兵*/
    for (i = 0; vc[i] != key; i++)
        ;    
    return (i == no ? FAILED : i);
}

int main(void) {
    int i, ky, idx;
    int vx[NUMBER+1];

    for (i = 0; i < NUMBER; i++) {
        int cln_buf;
        printf("vx[%d]:", i);        scanf("%d", &vx[i]);
        while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
            ;
    }
    int cln_buf;
    printf("要查找的值：");          scanf("%d", &ky);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    idx = search(vx, ky, NUMBER);
    if (idx == FAILED)
        puts("\a查找失败。");
    else
        printf("%d是数组的第%d号元素。\n", ky, idx+1);
    
    return (0);
}
