/*
    ��ȡ��ߵ�����ֵ����ʾ����׼���ص�ʵ��ֵ
*/

#include <stdio.h>

int main(void){
    int hight;
    double weight;

    printf("������������ߣ�"); scanf("%d", &hight);

    weight = ((double)hight - 100) * 0.9;

    printf("���ı�׼������%5.1f���\n", weight);

    return(0);
}
