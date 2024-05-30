#include<stdio.h>

struct Student
{
    int RID;
    int Age;
    double Marks;
    char Division;
    int Salary;
};


int main()
{
    struct Student obj97;
    struct Student obj134;
    struct Student *ptr = NULL;
    
    obj97.RID = 97;
    obj97.Age = 20;
    obj97.Marks = 85.66;
    obj97.Division = 'A';
    obj97.Salary = 120000;

    obj134.RID = 134;
    obj134.Age = 22;
    obj134.Marks = 92.66;
    obj134.Division = 'D';
    obj134.Salary = 100000;

    ptr = &obj97;

    printf("RID of Datta : %d\n",ptr->RID);
    printf("Age of Datta : %d\n",ptr->Age);
    printf("Percentage of Datta : %f\n",ptr->Marks);

    ptr = &obj134;
    printf("RID of Rushi : %d\n",ptr->RID);
    printf("Age of Rushi : %d\n",ptr->Age);
    printf("Percentage of Rushi : %f\n",ptr->Marks);

    printf("Size of object is %d\n",sizeof(obj134));

    return 0;
}