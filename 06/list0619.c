/*
    �Զ��洢�ں;�̬�洢��
*/

#include <stdio.h>

static int fx = 0;              /*��̬�洢�ڣ��ļ�������*/

void func(void) {
    static int sx = 0;          /*��̬�洢�ڣ���������*/    
    int ax = 0;                 /*�Զ��洢�ڣ���������*/
    printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main(void) {
    int i;

    puts(" ax sx fx");
    puts("---------");
    for (i = 0; i < 10; i++)
        func();
    puts("---------");

    return (0);
}

