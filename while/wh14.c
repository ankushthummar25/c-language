#include <stdio.h>
int main()
{
    char i=0;
	int a=65,b=97; 
	
	while(i<=12)
	{
		i++;
		
		if(i%2==1)
		{
			printf("%c\n",a);
			a+=2;
			b+=2;
		}else
			{
				printf("%c\n",b);
				b+=2;
				a+=2;
			}
	}
return 0;
} 


/*

	A
	c
	E
	g
	I
	k
	M
	o
	Q
	s
	U
	w
	Y

*/
