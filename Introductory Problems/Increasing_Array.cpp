#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int arr[n];

    long long int cnt=0;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int j=1; j<n; j++)
    {
        if(arr[j-1] > arr[j]){
            cnt += (arr[j-1] - arr[j]);
            arr[j] += (arr[j-1] - arr[j]);
        }

        else
            continue;
    }
    cout<<cnt;
    return 0;
}
