/*
 *�����׼�������г��ֵ�����
*/

#include <stdio.h>

int main(void) {
    int     ch;
    int     count = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    printf("����������ı�����%d�С�\n", count);

    return(0);
}
