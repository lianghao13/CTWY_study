/*
    �����1000���ڵ���������3�棩 
*/

#include <stdio.h>

int main(void) {
    int i, no;
    unsigned long counter = 0;

    no = 2;
    printf("%d\n", no++);               /*2��ż����Ψһ������*/

    for ( ;no <= 1000; no += 2) {       /*no��3��ʼ��ֻ��������Ϊ�ж϶���*/
        for (i =3; i < no; i+=2) {
            counter++;
            if (no % i == 0)            /*�ܱ������Ĳ�������*/
                break;                  /*�˳�����ѭ��*/            
        }
        if (no == i)                    /*������������ֱ�����Ҳδ������*/
            printf("%d\n", no);
    }

    printf("�˳�����Ĵ�����%lu\n", counter);

    return (0);
}
