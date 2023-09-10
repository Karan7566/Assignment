#include<stdio.h>
int main()
{
    int num,rem,large=0;
    printf("enter  number");
    scanf("%d",&num);
    int ori=num;
   while(num>0)
   {
        rem=num%10;
    if(rem>large)
    {
        large=rem;
    }
    num=num/10;
   }
    printf("%d is largest among %d",large,ori);
    return 0;
}
