/*
    ��֤�������ͺ���������
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

    puts("����ĳ����б����£�");
    printf("Int_Const_01:%-4d\tInt_Const_02:%-4d\n", Int_Const_01, Int_Const_02);
    printf("Fld_Const_01:%-4.2f\tFld_Const_02:%-4.2f\n\n", Fld_Const_01, Fld_Const_02);
    printf("�������ͳ���֮�͸������ͱ���n1 = %-4d\n", n1); 
    printf("Fld_Const_01��Int_Const_02֮������ͱ���n2 = %-4d\n", n2); 
    printf("Int_Const_01��Fld_Const_02֮���������ͱ���n3 = %-4d\n", n3); 
    printf("���������ͳ���֮�̸������ͱ���n4 = %-4d\n\n", n4);

    printf("�������ͳ���֮�͸������ͱ���d1 = %-4.2f\n", d1); 
    printf("Fld_Const_01��Int_Const_02֮������ͱ���d2 = %-4.2f\n", d2); 
    printf("Int_Const_01��Fld_Const_02֮���������ͱ���d3 = %-4.2f\n", d3); 
    printf("���������ͳ���֮�̸������ͱ���d4 = %-4.2f\n\n", d4);
    
    return(0);
}
