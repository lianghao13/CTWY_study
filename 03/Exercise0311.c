/*
    输入的整数是奇数还是偶数（switch版）
*/

#include<stdio.h>

int main(void){
    int no;
    int sw = 0;

    printf("请输入一个整数:");
    scanf("%d", &no);

    sw = no % 2;

    switch (sw) {
     case 0 : puts("该整数是偶数");     break;
     case 1 : puts("该整数是奇数");     break;
     default : puts("This is an error!");   break;  /*puts语句自动换行。*/ 
    }   
    
    return(0);
}
