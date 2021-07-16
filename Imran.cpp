#include<stdio.h>

void selectionsort(int a[],int n)
{
    int i,j,indexmin,temp;
    for(int i=0;i<n-1;i++)
    {
        indexmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[indexmin]>a[j])
            indexmin=j;
        }

       if(indexmin!=i)
       {
          temp=a[i];
          a[i]=a[indexmin];
          a[indexmin]=temp;
       }
    }
    
}
int main()
{
    int a[]={8,7,6,4,9,1};
    int n=6;
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);

}