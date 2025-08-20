#include<stdio.h>
int main()
{
	int a[10][10],b[10],c[10],m,n,i,j;
	printf("enter the dimensions of the matrix");
	scanf("%d%d",&m,&n);
	printf("enter the elements into the matrix");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(j=0;j<n;j++)
		b[i]=b[i]+a[i][j];
		
	}
	for(i=0;i<n;i++)
	{
		c[i]=0;
		for(j=0;j<m;j++)
		c[i]=c[i]+a[j][i];
	}
	printf("sum of rows\n");
	for(i=0;i<m;i++);
	printf("%d\t",b[i]);
	printf("sum of columns\n");
	for(i=0;i<n;i++)
	printf("%d\t",c[i]);
	return 0;
}
