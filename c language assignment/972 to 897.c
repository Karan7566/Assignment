#include<stdio.h>
int main()
{
	int i;
	
		for(i=972;i>=897;i--)
		{
			printf("\n%d",i);
		}
	
	
	
	return 0;
}


// i=rows,j==column
// i=1 1<=1 t j=0 0<=1 1 j=2
// j=2 2<=1 false i++ i=2
// 2<3 j=1 1<=2 * j=2 2<=2 * j++ j=3 3<=2 false 
// i=3 3<5 j=1 1<3 * j++ j=2 2<3 * j++ j=3 3<=3 * j++ j=4 4<=3 false \n 
//
