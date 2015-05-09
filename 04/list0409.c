/*
   递增显示从0到输入的正整数为止
*/

#include <stdio.h>

int main(void){
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 0;
    while (i <= no) 
        printf("%d,", i++);
    
    putchar('\n');              /*换行*/

    return (0);
}
