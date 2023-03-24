#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;cin>>t;
    set<int>dis;

    for(int i=0; i<t; i++){
        int temp;
        cin>>temp;
        dis.insert(temp);
    }

    cout<<dis.size()<<"\n";

    return 0;
}
