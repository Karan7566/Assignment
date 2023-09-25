#include<stdio.h>
struct employee{
	int e_id;
	char name[100];
	float salary;
};
int main()
{
	struct employee emp[100];
	int i,n;
	printf("enter how many employee detail you want to enter ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter details of employee %d",i+1);
		printf("\nenter employee id:");
		scanf("%d",&emp[i].e_id);
		printf("\nenter employee name:");
		scanf("%s",&emp[i].name);
		printf("\nenter employee salary:");
		scanf("%f",&emp[i].salary);
	}
	printf("\n--------DETAILS OF EMPLOYEE--------");
	for(i=0;i<n;i++)
	{
	printf("\nDetails of employee %d:",i+1);	
	printf("\nenter employee id:%d\n\nenter employee name:%s\n\n enter employee salary:%f",emp[i].e_id,emp[i].name,emp[i].salary);
	}

}
