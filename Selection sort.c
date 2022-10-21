#include<stdio.h>
void main()
{
    int a[10],n=10,i,k,temp,pos;
    printf("\n Enter 10 numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(k=0;k<n-1;k++)
    {
        pos=k;
        i=k+1;
        while(i<=n-1)
        {
            if(a[i]<a[pos])

                pos=i;
                i=i+1;

        }
        temp=a[k];
        a[k]=a[pos];
        a[pos]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
