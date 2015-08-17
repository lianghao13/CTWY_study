/*
 *显示所选动物的叫声
*/

#include <stdio.h>

enum animal { Dog, Cat, Monkey, Invalid };

/*---狗叫---*/
void dog(void) {
    puts("汪汪！！");
}

/*---猫叫---*/
void cat(void) {
    puts("喵~！！");
}

/*---猴叫---*/
void monkey(void) {
    puts("唧唧！！");
}

/*---选择动物---*/
enum animal select(void) {
    int tmp;
    int c_s;

    do {
        printf("0...狗  1...猫  2...猴  3...结束：");
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
