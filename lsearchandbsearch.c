#include<stdio.h>
#include<stdlib.h>

void lsearch(int a[],int n, int item)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            printf("\nItem found");
            break;
        }
        else
        {
            printf("\nItem not found");
            break;
        }
    }
}

void binsearch(int a[],int item)
{
    int n=5,i,low,high,mid;
    low=0;
    high=n-1;
    do
    {
        mid=(low+high)/2;
        if(item==a[mid])
        {
            printf("\nItem found at %d",mid);
            break;
        }
        else if(item>a[mid])
        {
            low=mid+1;
        }
        else
        high=mid-1;
    }while(low<=high);
    
    if(low>high)
    printf("\nitem not found");
    
}

void main()
{
    system("cls");
    int item,a[5],n=5;
    printf("\nEnter values in array:");
    for(int i=0;i<n;i++)    
    {
        scanf("%d",&a[i]);
    }    
    printf("\nEnter Item to be searched: ");
    scanf("%d",&item);
    printf("\nItem to be search through linear search-----------------");
    lsearch(a,n,item);
    printf("\nItem to be search through binary search------------------");
    binsearch(a,item);
}