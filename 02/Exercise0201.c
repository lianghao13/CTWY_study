/*
    ��ȡ����������ֵ����ʾǰ���Ǻ��ߵİٷ�֮��
*/

#include <stdio.h>

int main(void){
    int vx,vy;

    puts("����������������");
    printf("����vx:");  scanf("%d",&vx);
    printf("����vy:");  scanf("%d",&vy);

    printf("vx��vy�İٷ�֮%d%%��\n",(vx * 100) / vy);

    return(0);
}
