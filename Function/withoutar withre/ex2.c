#include<stdio.h>

int run()
{
    int i;
    for(i=51; i<99; i++)
    {
        printf("%d\t",i);
    }
    return i;
}

int main()
{
    int i;
   i= run();
   printf("%d",i);

    return 0;
}


/*

51	52	53	54	55	56	57	58	59	60
61	62	63	64	65	66	67	68	69	70	
71	72	73	74	75	76	77	78	79	80	
81	82	83	84	85	86	87	88	89	90	
91	92	93	94	95	96	97	98	99  

*/