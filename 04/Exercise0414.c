/*
    ��ʾ��ߺͱ�׼���صĶ��ձ���ߵķ�Χ�ͼ�������������ֵ���ƣ���׼���ؾ�ȷ��С�����2λ 
*/

#include <stdio.h>

int main(void){
    int height01, height02, step, tmp;
    float weight;
    
    do {
        printf("��ʼ��ֵ��cm��:");    scanf("%d", &height01);
        printf("������ֵ��cm��:");    scanf("%d", &height02);
        printf("�����ֵ��cm��:");    scanf("%d", &step);
        if (height01 > height02 || step <= 0) {
            puts("\a���������ķ�Χֵ��");
        }
    } while (height02 <= height01);

    tmp = (height02 - height01) % step;

    if (tmp == 0) {
        for (tmp = height01; tmp <= height02; tmp+=step) {
            weight = (float)0.9 * tmp - 90;
            printf("%dcm    %4.2fkg\n", tmp, weight);
        }
    }
    else {
        tmp = height01;
        while (tmp < height02) {
            weight = (float)0.9 * tmp - 90;
            printf("%dcm    %4.2fkg\n", tmp, weight);
            tmp += step;
        }
        weight = (float)0.9 * height02 - 90;
        printf("%dcm    %4.2fkg\n", height02, weight);
    }

    return(0);
}
