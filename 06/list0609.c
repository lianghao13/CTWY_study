/*
    ������ʾ����ķǸ���
*/

#include <stdio.h>

/*---��������ķǸ���---*/
int scan_unit(void) {
    int tmp;

    do {
        printf("������һ���Ǹ�������");
        scanf("%d", &tmp);
        if (tmp < 0)
            puts("\a�벻Ҫ���븺������");
    } while (tmp < 0);
    
    return (tmp);
}

/*---���طǸ�������ת���ֵ---*/
int rev_int(int num) {
    int tmp = 0;

    if (num > 0) {
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while (num > 0);
    }
    
    return (tmp);
}

int main(void) {
    int nx = scan_unit(void);

    printf("��������ת���ֵ�ǣ�%d��\n", rev_int(nx));

    return (0);
}
