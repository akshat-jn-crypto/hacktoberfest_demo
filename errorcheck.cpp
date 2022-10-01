#include <stdio.h>
struct Address
{
       char district[25];
       char state[25];
       char city[25];
       char street[25];
};
struct Employee
{
       char Emp_Name[25];
       int Emp_Age;
       char Emp_Degree[25];
       float Emp_Exp;
       struct Address Emp_Add;
};

int main()
{
       int i;
       struct Employee E[20];
       printf("Enter Records of 20 employee");
       for (i = 0; i < 20; i++)
       {
              printf("\n\tEnter Employee Name : ");
              scanf("%s", &E[i].Emp_Name);

              printf("\n\tEnter Employee Age : ");
              scanf("%d", &E[i].Emp_Age);

              printf("\n\tEnter Employee street No : ");
              scanf("%s", &E[i].Emp_Add.street);

              printf("\n\tEnter Employee City : ");
              scanf("%s", &E[i].Emp_Add.city);

              printf("\n\tEnter Employee District : ");
              scanf("%s", &E[i].Emp_Add.district);

              printf("\n\tEnter Employee State : ");
              scanf("%s", &E[i].Emp_Add.state);

              printf("\n\tEnter Employee degree : ");
              scanf("%s", &E[i].Emp_Degree);

              printf("\n\tEnter Employee Exp : ");
              scanf("%f", &E[i].Emp_Exp);
              
       }

       printf("\nDetails of Employees");
       for (i = 0; i < 20; i++)
       {
              printf("\n\tEmployee Name : %s", E[i].Emp_Name);
              printf("\n\tEmployee Age : %d", E[i].Emp_Age);
              printf("\n\tEmployee Street No. : %s",E[i].Emp_Add.street);
              printf("\n\tEmployee City : %d", E[i].Emp_Add.city);
              printf("\n\tEmployee District : %d", E[i].Emp_Add.district);
              printf("\n\tEmployee state : %d", E[i].Emp_Add.state);
              printf("\n\tEmployee Degree : %d", E[i].Emp_Degree);
              printf("\n\tEmployee Experince : %d", E[i].Emp_Exp);
       }
       return 0;
}

