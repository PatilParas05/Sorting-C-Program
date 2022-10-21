#include<stdio.h>
void main()
{
    int a[10],n=10,i,k,temp;
    printf("\n Enter 10 numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(k=0;k<n;k++)
    {
       for(i=0;i<n-k;i++)
            if(a[i]>a[i+1])
       {
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
       }
    }
    printf("\n After sorting \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
