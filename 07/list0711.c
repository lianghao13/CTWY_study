/*
 *��������ľ���
*/

#include <math.h>
#include <stdio.h>

/*---�����(x1,y1)�͵�(x2,y2)֮��ľ���---*/
double dist(double x1, double y1, double x2, double y2) {
    return(sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}

int main(void) {
    double x1, y1;          /*��1*/
    double x2, y2;          /*��2*/
    int cln_buf;

    printf("<��1>X���꣺");     scanf("%lf", &x1);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("     Y���꣺");     scanf("%lf", &y1);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("<��2>X���꣺");     scanf("%lf", &x2);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("     Y���꣺");     scanf("%lf", &y2);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("2��֮��ľ���Ϊ%f��\n", dist(x1, y1, x2, y2));

    return(0);
}
