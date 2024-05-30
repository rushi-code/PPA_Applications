#include<stdio.h>

int main()
{
    int No1 = 67;
    int No2 = 89;

    printf("Bitwise & : %d\n",(No1&No2));
    printf("Bitwise | : %d\n",(No1|No2));
    printf("Bitwise ^ : %d\n",(No1^No2));
    printf("<< %d\n",No1<<2);
    printf(">> %d\n",No1>>2);
    
    return 0;
}