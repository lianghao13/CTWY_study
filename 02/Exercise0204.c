/*
    验证数据类型和四则运算
*/

#include <stdio.h>
#define Int_Const_01 5
#define Int_Const_02 2
#define Fld_Const_01 5.0
#define Fld_Const_02 2.0

int main(void){
    int     n1, n2, n3, n4;
    double  d1, d2, d3, d4;

    n1 = Int_Const_01 + Int_Const_02;
    n2 = Fld_Const_01 - Int_Const_02;
    n3 = Int_Const_01 * Fld_Const_02;
    n4 = Fld_Const_01 / Fld_Const_02;
    
    d1 = Int_Const_01 + Int_Const_02;
    d2 = Fld_Const_01 - Int_Const_02;
    d3 = Int_Const_01 * Fld_Const_02;
    d4 = Fld_Const_01 / Fld_Const_02;

    puts("定义的常量列表如下：");
    printf("Int_Const_01:%-4d\tInt_Const_02:%-4d\n", Int_Const_01, Int_Const_02);
    printf("Fld_Const_01:%-4.2f\tFld_Const_02:%-4.2f\n\n", Fld_Const_01, Fld_Const_02);
    printf("两个整型常量之和赋予整型变量n1 = %-4d\n", n1); 
    printf("Fld_Const_01与Int_Const_02之差赋予整型变量n2 = %-4d\n", n2); 
    printf("Int_Const_01与Fld_Const_02之积赋予整型变量n3 = %-4d\n", n3); 
    printf("两个浮点型常量之商赋予整型变量n4 = %-4d\n\n", n4);

    printf("两个整型常量之和赋予整型变量d1 = %-4.2f\n", d1); 
    printf("Fld_Const_01与Int_Const_02之差赋予整型变量d2 = %-4.2f\n", d2); 
    printf("Int_Const_01与Fld_Const_02之积赋予整型变量d3 = %-4.2f\n", d3); 
    printf("两个浮点型常量之商赋予整型变量d4 = %-4.2f\n\n", d4);
    
    return(0);
}
