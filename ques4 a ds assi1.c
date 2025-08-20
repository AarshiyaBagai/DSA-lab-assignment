#include<stdio.h>
int main()
{
	int a[100],i,j,n,t;
	printf("enter the no. of elements of the array");
	scanf("%d",&n);
	printf("enter the elements into the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	printf("array elements are");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
		
	}
