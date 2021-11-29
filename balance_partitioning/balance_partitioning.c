#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


int main()
{

	int res=INT_MAX;
	int n,i,diff,lSum,rSum,resIndex;

	
	printf("\nEnter the no of elements in an array:");
	scanf("%d",&n);


	int a[n];
	for(int k=0;k<n;k++)
	{
		a[k]=(2*k)+4;
	}
	for(int k=1;k<n-1;k++)
	{
		lSum=0;
		rSum=0;
		for(i=0;i<k-1;i++)
		{
			lSum=lSum+a[i];
		}
		for(i=k+1;i<n;i++)
		{
			rSum=rSum+a[i];
		}	
		diff=abs(lSum-rSum);
		if(diff<res)
		{
			res=diff;
			resIndex=k;
		}
	}
	printf("%d",resIndex);
	return 0;
}
	
