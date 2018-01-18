#include <iostream>
#include <stdio.h>
using namespace std;
int binarysearch(int v[],int l,int r,int x){
    while(r>=l)
    {
    int mid=l+(r-l)/2;
    if(v[mid]==x)
        return mid;
    if(v[mid]>x)
        return binarysearch(v,l,mid-1,x);
        else
        return binarysearch(v,mid+1,r,x);
}
return -1;
}
int main()
{
    int v[101],n,x;
    cin>>n;
    for(int i=0;i<=n-1;i++)
        cin>>v[i];
    cin>>x;
    for(int k=0;k<=n-1;k++)
        for(int j=k+1;j<=n-1;j++)
    if(v[k]>v[j]){
        int t=v[k];
        v[k]=v[j];
        v[j]=t;
    }
    int result=binarysearch(v,0,n-1,x);
    if(result!=-1)
    cout<<"The element's position is "<<result;
    else
    cout<<"The element is not present in the array";
}
