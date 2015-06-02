/*
    计算出1000以内的质数（第5版） 
*/

#include <stdio.h>

int main(void) {
    int i, no;
    int prime[500];                     /*用于保存质数的数组*/
    int prt = 0;                        /*已经得到的质数个数,prime[]下标加1*/
    unsigned long counter = 0;
    
    prime[prt++] = 2;
    prime[prt++] = 3;                   /*肯定是质数的2和3填入数组并完成prt的计数*/

    for (no = 5; no <= 1000; no += 2) {                             /*no从5开始，只把奇数作为判断对象*/
        int flag = 0;
        for (i =1; counter++, prime[i] * prime[i] <= no; ++i) {     /*尝试能否被已得到的质数整除，从3开始*/
            counter++;
            if (no % prime[i] == 0) {                               /*能被整除的不是质数*/ 
                flag = 1;
                break;                  /*退出当前复合语句，即if的子语句，返回到for循环中*/  
            }
        }
        if (!flag)                      /*直到之前已得到的质数也未被整除*/
           prime[prt++] = no;           /*确定为新发现的质数，添加到数组中，同时prt计数增加1*/
    }

    for (i = 0; i < prt; i++)
        printf("%d\n", prime[i]);

    printf("乘除运算的次数：%lu\n", counter);

    return (0);
}
