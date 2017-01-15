/*#include<stdio.h> // if it is at position n then it will print n-1
void BinarySearch(int A[],int l,int r,int q);
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n],q;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&q);
    BinarySearch(A,0,n-1,q);
    return 0;
}
void BinarySearch(int A[],int l,int r,int q)
{
    if(q==A[(r+l)/2])
    {
        printf("%d",(r+l)/2);
    }
    else if(q<A[(r+l)/2])
    {
        BinarySearch(A,l,(r+l)/2-1,q);
    }
    else
    {
        BinarySearch(A,(r+l)/2+1,r,q);
    }
}
*/
