#include<stdio.h>
struct student {
	int rollno;
	char name[100];
	float pr;
};
union student1{
	int rollno;
	char name[100];
	float pr;
};
int main()
{
	struct student s1;
	s1.rollno=5;
	s1.pr=55;
	
	pritnf("structure:%d is roll no:%f is pr",s1.rollno,s1.pr);
	union student1 u1;
	u1.rollno=10;
	
}
