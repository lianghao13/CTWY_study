/*
    ˳����ң��ڱ����ҷ����ڶ��棩
*/

#include <stdio.h>

#define NUMBER  5
#define FAILED  -1

/*---ͨ���ڱ����ҷ�˳����ң�ʹ��for���Ϳ����---*/
int search(int vc[], int key, int no) {
    int i = 0;
    vc[no] = key;                        /*����ڱ�*/
    for (i = 0; vc[i] != key; i++)
        ;    
    return (i == no ? FAILED : i);
}

int main(void) {
    int i, ky, idx;
    int vx[NUMBER+1];

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    printf("Ҫ���ҵ�ֵ��");
    scanf("%d", &ky);

    idx = search(vx, ky, NUMBER);
    if (idx == FAILED)
        puts("\a����ʧ�ܡ�");
    else
        printf("%d������ĵ�%d��Ԫ�ء�\n", ky, idx+1);
    
    return (0);
}
