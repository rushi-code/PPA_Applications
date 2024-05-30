#include<stdio.h>

int main()
{
    char ch = 'A';

    int no = 11;

    float data = 3.1452;

    double d = 1547.567854;

    printf("Value of ch is %c\n",ch);
    printf("Value of no is %d\n",no);
    printf("Value of data is %f\n",data);
    printf("Value of d is %f\n",d);

    printf("Address of ch is %d\n",&ch);
    printf("Address of no is %d\n",&no);
    printf("Address of data is %d\n",&data);
    printf("Address of d is %d\n",&d);

    printf("Size of ch is %d\n",sizeof(ch));
    printf("Size of no is %d\n",sizeof(no));
    printf("Size of data is %d\n",sizeof(data));
    printf("Size of d is %d\n",sizeof(d));

    return 0;
}