/*#include <stdio.h>
#include <stdlib.h>
void quicksort(int A[],int l,int r);
int partition(int A[],int l,int r);
int main()
{
    int n;
    scanf("%d",&n);
    int A[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    quicksort(A,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
void quicksort(int A[],int l,int r)
{
    if(l<r)
    {
        int q;
        q=partition(A,l,r);
        quicksort(A,l,q-1);
        quicksort(A,q+1,r);
    }
    else
        return;
}
int partition(int A[],int l,int r)
{
    int x=A[r];
    int i,j;
    i=l-1;
    for(j=l;j<r;j++)
    {
        if(A[j]<=x)
        {
            i++;
            int k=A[i];
            A[i]=A[j];
            A[j]=k;
        }
    }
    int k=A[i+1];
    A[i+1]=A[r];
    A[r]=k;
    return i+1;
}
*/
