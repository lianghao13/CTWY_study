/*
    ���㲢��ʾ��1��5�ĺͣ�ʹ�ø��ϸ�ֵ������ͺ��õ��������,for���棩
*/

#include <stdio.h>

int main(void){
    int no;
    int sum = 0;

    for (no = 1; no < 6; ++no) {
        sum += no;
    }

    printf("1��5�ĺϼ�ֵ��%d��\n", sum);

    return (0);
}
