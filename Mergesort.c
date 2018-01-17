#include <stdio.h>
#include <stdlib.h>
void mergesort(int A[],int l,int r);
void merge(int A[],int l,int q,int r);
long long int inv=0;
int main()
{
    int n;
    scanf("%d",&n);
    int i,A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    mergesort(A,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
void mergesort(int A[],int l,int r)
{
    if(r>l)
    {
        int q;
        q=((l+r)/2);
        mergesort(A,l,q);
        mergesort(A,q+1,r);
        merge(A,l,q,r);
    }
    else
        return;
}
void merge(int A[],int l,int q,int r)
{
    int n1=q-l+1;
    int n2=r-q;
    int i=0,B[n1],C[n2];
    for(i=0;i<n1;i++)
    {
        B[i]=A[l+i];
    }
    for(i=0;i<n2;i++)
    {
        C[i]=A[q+i+1];
    }
    int k,x=0,y=0;
    for(k=l;k<r+1;k++)
    {
        if(y>=n2)
        {
            A[k]=B[x];
            x++;
        }
        else if(x>=n1)
        {
            A[k]=C[y];
            y++;
        }
        else if(B[x]<C[y])
        {
            A[k]=B[x];
            x++;
        }
        else
        {
            A[k]=C[y];
            y++;
        }
    }
}

