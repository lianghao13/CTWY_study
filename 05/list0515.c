/*
    �����1000���ڵ���������1�棩 
*/

#include <stdio.h>

int main(void) {
    int i, no;
    unsigned long counter = 0;

    for (no = 2;no <= 1000; no++) {
        for (i =2; i < no; i++) {
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
