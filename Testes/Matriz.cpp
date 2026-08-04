//array
#include <stdio.h>

int val[4][4];

int main()
{
/*	foreach(int[] i in val)
	{
		i = new int[4]
	}*/
	
	foreach(int x[4] in val)
	{
		foreach(int y in x)
		{
			printf("%d", y);
		}
		printf("\n");
	}
	return 0;
}


