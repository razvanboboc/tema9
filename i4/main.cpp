#include <iostream>

using namespace std;

int main()
{
    int v[101],n,x;
    cin>>n;
    for(int i=0;i<=n-1;i++)
        cin>>v[i];
    for(int k=0;k<=n-1;k++)
        for(int j=k+1;j<=n-1;j++)
    if(v[k]>v[j]){
        int t=v[k];
        v[k]=v[j];
        v[j]=t;
    }
    for(int l=0;l<=n-1;l++)
        cout<<v[l]<<" ";
}
