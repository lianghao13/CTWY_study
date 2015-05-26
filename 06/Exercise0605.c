/*
   连续发出no次警报 
*/

#include <stdio.h>

/*---连续发出no个警报---*/
void alert(int no) {
    while (no-- > 0)
        putchar('\a');
}

int main(void) {
    int i;
    int c_scanf;

    printf("输入发出警报的次数:");   scanf("%d", &i);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    puts("正在发出警报！");
    
    alert(i);

    return(0);
}
