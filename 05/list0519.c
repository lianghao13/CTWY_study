/*
    �����1000���ڵ���������5�棩 
*/

#include <stdio.h>

int main(void) {
    int i, no;
    int prime[500];                     /*���ڱ�������������*/
    int prt = 0;                        /*�Ѿ��õ�����������,prime[]�±��1*/
    unsigned long counter = 0;
    
    prime[prt++] = 2;
    prime[prt++] = 3;                   /*�϶���������2��3�������鲢���prt�ļ���*/

    for (no = 5; no <= 1000; no += 2) {                             /*no��5��ʼ��ֻ��������Ϊ�ж϶���*/
        int flag = 0;
        for (i =1; counter++, prime[i] * prime[i] <= no; ++i) {     /*�����ܷ��ѵõ���������������3��ʼ*/
            counter++;
            if (no % prime[i] == 0) {                               /*�ܱ������Ĳ�������*/ 
                flag = 1;
                break;                  /*�˳���ǰ������䣬��if������䣬���ص�forѭ����*/  
            }
        }
        if (!flag)                      /*ֱ��֮ǰ�ѵõ�������Ҳδ������*/
           prime[prt++] = no;           /*ȷ��Ϊ�·��ֵ���������ӵ������У�ͬʱprt��������1*/
    }

    for (i = 0; i < prt; i++)
        printf("%d\n", prime[i]);

    printf("�˳�����Ĵ�����%lu\n", counter);

    return (0);
}
