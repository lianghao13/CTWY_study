/*
    ���������������Ĵ���
*/

#include <stdio.h>

/*---����ƽ��---*/
int sqr(int x) {
    return(x * x);
}

/*---�����Ĵ���---*/
int pow4(int num){
    return(sqr(num) * sqr(num));
}

int main(void) {
    int kx;
    int c_scanf;
    
    puts("������һ��������");
    printf("����kx��");      scanf("%d", &kx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("kx���Ĵ�����%d��\n", pow4(kx));

    return(0);
}
