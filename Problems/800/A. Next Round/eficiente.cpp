#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int n, k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int score=arr[k-1];
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0 && arr[i]>=score)
        count++;
    }
    cout<<count<<endl;
 
 
    return 0;
}