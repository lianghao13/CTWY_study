/*
    ��ʾ���������������3������
*/

#include<stdio.h>

int main(void){
    int num;

    printf("������һ������:");
    scanf("%d", &num);

    switch(num % 3){
     case 0 : puts("�����ܱ�3������");          break;    
     case 1 : puts("������3������������1��");   break;    
     case 2 : puts("������3������������2��");   break;    
    }
    
    return(0);
}
