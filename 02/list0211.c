/*
    ��ȡ��������,����ʾ�����ǵĺϼ�ֵ��ƽ��ֵ
*/

#include <stdio.h>

int main(void){
    int     na, nb, nc;
    int     sum;            //�ϼ�ֵ
    double  ave;            //ƽ��ֵ
    
    puts("����������������");
    printf("����A��");  scanf("%d", &na);
    printf("����B��");  scanf("%d", &nb);
    printf("����C��");  scanf("%d", &nc);

    sum = na + nb + nc;
    ave = (double)sum / 3;  //����ת��

    printf("���ǵĺϼ�ֵ��%5d��\n", sum);       //��ʽΪ99999
    printf("���ǵ�ƽ��ֵ��%5.1f��\n", ave);     //��ʽΪ999.9
    
    return(0);    
}

