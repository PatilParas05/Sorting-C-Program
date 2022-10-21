#include<stdio.h>
void main()
{
    int a[10],n=10,i,k,temp;
    printf("Enter 10 numbers");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(k=0;k<n-1;k++)
    {
        temp=a[k];
        i=k-1;
        while(i>=0 && a[i]>temp)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
