#include  <iostream>
using namespace std;
int v[101],n;
void shellSort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap = gap / 2)
    {
        for (i = gap; i < n; ++i)
        {
            temp = v[i];
            for (j = i; j >= gap && v[j - gap] > temp; j = j - gap)
                v[j] = v[j - gap];
            v[j] = temp;
        }
    }
}
int main(){
cin>>n;
for(int i=0;i<n;i++)
    cin>>v[i];
shellSort(v,n);
for(int j=0;j<n;j++)
    cout<<v[j]<<" ";
return 0;
}

