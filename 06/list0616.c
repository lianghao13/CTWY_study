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
        int c_scanf;
        printf("vx[%d]:", i);        scanf("%d", &vx[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
    }
    int c_scanf;
    printf("Ҫ���ҵ�ֵ��");          scanf("%d", &ky);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    idx = search(vx, ky, NUMBER);
    if (idx == FAILED)
        puts("\a����ʧ�ܡ�");
    else
        printf("%d������ĵ�%d��Ԫ�ء�\n", ky, idx+1);
    
    return (0);
}
