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
    int cln_buf;

    printf("输入发出警报的次数:");   scanf("%d", &i);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    puts("正在发出警报！");
    
    alert(i);

    return(0);
}
