#include<stdio.h>
int main()
{
	int i,j,a=1;
		for(i=1; i<=5; i++) 
		{
			for(j=1; j<=i; j++)
			{
				printf("%d\t",a++);
			}
			printf("\n");
		}
return 0;
}

/*

1
2       3
4       5       6
7       8       9       10
11      12      13      14      15

*/