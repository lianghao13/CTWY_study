/*
    �������������������ż����switch�棩
*/

#include<stdio.h>

int main(void){
    int no;
    int sw = 0;

    printf("������һ������:");
    scanf("%d", &no);

    sw = no % 2;

    switch (sw) {
     case 0 : puts("��������ż��");     break;
     case 1 : puts("������������");     break;
     default : puts("This is an error!");   break;  /*puts����Զ����С�*/ 
    }   
    
    return(0);
}
