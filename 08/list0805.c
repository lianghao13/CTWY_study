/*
 *��ʾ��ѡ����Ľ���
*/

#include <stdio.h>

enum animal { Dog, Cat, Monkey, Invalid };

/*---����---*/
void dog(void) {
    puts("��������");
}

/*---è��---*/
void cat(void) {
    puts("��~����");
}

/*---���---*/
void monkey(void) {
    puts("���󣡣�");
}

/*---ѡ����---*/
enum animal select(void) {
    int tmp;
    int c_s;

    do {
        printf("0...��  1...è  2...��  3...������");
        scanf("%d", &tmp);
        while((c_s = getchar()) != '\n' && c_s != EOF)
            ;
    } while (tmp < Dog || tmp > Invalid);
    return((enum animal)tmp);
}

int main(void) {
    enum animal selected;

    do {
        switch (selected = select()) {
            case Dog:       dog();      break;
            case Cat:       cat();      break;
            case Monkey:    monkey();   break;
            case Invalid:   break;
        }
    } while (selected != Invalid);
    return(0);
}
