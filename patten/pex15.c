#include<stdio.h>
int main()
{
	int n,k,i,f,j;
	
	 printf("enter the value : ");
	 scanf("%d", &n);
	
	printf("\n");
	
	for(i=0; i<=n; i++)
	{
		
		for(j=0; j<=i; j++)
		{
			printf(" ");
		}
		
		for(k=n; k>=i; k--)
		{
			printf(" *");
		}
		
			printf("\n");
	}
	
	return 0;
}


/*

  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *
	   
*/