#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,x,x1=10,x2;
	for(i=0;i<200;i++)
		rand();
	n = rand()/200;
	i=j=1;
	n = n/8;
	printf("\n Number of frames is %d",n);
	while(n>0)
	{	
		printf("\n Sending frame %d",i);
		srand(x1++);
		x = rand()%10;
		if(x%2 == 0)
		{
			for(x2 = 1; x2<2 ; x2++)
				sleep(x2);
			printf("\n Sending frame %d",i);
			srand(x1++);
			x = rand()%10;
		}
		printf("\n Ack for frame %d",j);
		n-=1;
		i++;j++;
	}
	printf("\n End of Stop and Wait protocol");
}
