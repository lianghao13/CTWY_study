/*
    ˳�����
*/

#include <stdio.h>

#define NUMBER 5
#define FAILED -1

/*---����Ԫ����Ϊno������vc����keyһ�µ�Ԫ��---*/
int search(const int vc[], int key, int no) {
    int i = 0;
    while (1) {
        if (i == no)
            return (FAILED);             /*����ʧ��*/
        if (vc[i] == key)
            return (i);                  /*���ҳɹ�*/
        i++;
    }
}

int main(void) {
    int i, ky, idx;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        int cln_buf;
        printf("vx[%d]:", i);    scanf("%d", &vx[i]);
        while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
            ;
    }
    int cln_buf;
    printf("Ҫ���ҵ�ֵ��");      scanf("%d", &ky);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    idx = search(vx, ky, NUMBER);
    if (idx == FAILED)
        puts("\a����ʧ�ܡ�");
    else
        printf("%d������ĵ�%d��Ԫ�ء�\n", ky, idx+1);
    
    return (0);
}
