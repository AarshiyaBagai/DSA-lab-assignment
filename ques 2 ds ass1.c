#include<stdio.h>
int main()
{
    int a [50],i,j,k,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements into the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the elements of the array are:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n=n-1;
                j=j-1;
            }
        }
    }
    printf(" elements of the array after deletion of the duplicate elements is:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
