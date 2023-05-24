#include<stdio.h>
int main()
{
	int N[]={10,5,20,15,8,25,30,40,45,100};
    int n=sizeof(N)/sizeof(N[0]);
	int min=N[0];
	int max=N[0];
	for(int i=1;i<n;i++)
	{
		if(N[i]<min)
		{
			min=N[i];
		}
		if(N[i]>max)
		{
			max=N[i];
		}
	}
	printf("the smallest nuumber is %d\n",min);
	printf("the largest number is %d\n",max);
	return 0;
		}
		
	

