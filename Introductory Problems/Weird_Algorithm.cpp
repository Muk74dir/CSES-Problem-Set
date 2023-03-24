#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;cin>>n;
    while(n > 0)
    {
        cout<<n<<" ";
        if(n == 1){
            break;
        }
        if(n%2 == 1){
            n = (n * 3) + 1;
        }
        else{
            n /= 2;
        }
    }

    return 0;
}
