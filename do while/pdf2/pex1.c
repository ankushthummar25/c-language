#include <stdio.h>
int main()
{

  int i=1,j;

	do{
		j=1;
		
		do{
			printf("%d \t",j);
			j++;
		}while(j<=i);
	
		printf("\n");
		
		i++;
	}while(i<=5);
	
   
  return 0;
}


/*  output 

1
1       2
1       2       3
1       2       3       4
1       2       3       4       5
*/ 
