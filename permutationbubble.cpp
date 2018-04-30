//using the bubble sort algorithm 30.04.2018 hackerearth April Curcuits Permutation
#include<stdio.h>
int main()
{
	int N,i,j,temp,a[9];
	int comcount=0,flag;
	scanf("%d",&N);
	if((N<9)&&(N>0))
	{
		for(i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		//bubble sort...
		flag=0;
		for(i=N-1;i>=0;i--)
		{
			if(flag==0)
			{
				flag=1;
				for(j=0;j<i;j++)
				{
					if(a[j]>a[j+1])
					{
						//swapping 
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
						flag==0;
						comcount++;
					}
				}
			}
		}
	printf("%d",comcount);
	}
	else
	{
		system.exit(0);
	}
	return 0;
}
