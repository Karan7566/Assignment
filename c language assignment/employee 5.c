#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void printEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() 
{

    struct Employee emp1;

    emp1.empno = 101;
    strcpy(emp1.empname, "Karan");
    strcpy(emp1.address, "Ghodasar");
    emp1.age = 18;
    printf("Employee details:\n");
    printEmployee(emp1);
    printf("\n");
    
 	struct Employee emp2;
    emp2.empno = 102;
    strcpy(emp2.empname, "Mahin");
    strcpy(emp2.address, "Gomptipur");
    emp2.age = 18;
    printEmployee(emp2);
    printf("\n");

 struct Employee emp3;
    emp3.empno = 103;
    strcpy(emp3.empname, "saumya");
    strcpy(emp3.address, "Khokhara");
    emp3.age = 18;
    printEmployee(emp3);
    printf("\n");

 struct Employee emp4;
    emp4.empno = 104;
    strcpy(emp4.empname, "Kishan");
    strcpy(emp4.address, "Bapunagar");
    emp4.age = 17;
    printEmployee(emp4);
    printf("\n");
    
 struct Employee emp5;
    emp5.empno = 105;
    strcpy(emp5.empname, "Divyam");
    strcpy(emp5.address, "Odhav");
    emp5.age = 17;
    printEmployee(emp5);
    printf("\n");

    return 0;
}
