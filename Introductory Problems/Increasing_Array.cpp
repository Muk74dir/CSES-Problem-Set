#include<bits/stdc++.h>
using namespace std;

int fact(int x){
    if(x==1)return 1;
    return x*fact(x-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<char>dis;

    string s;cin>>s;

    int rem[dis.size()];

    for(int i=0; i<s.size(); i++){
        dis.insert(s[i]);
    }

    for(int i=0; i<dis.size(); i++){
        cout<<count(s.begin(), s.end(), s[i]);
    }


    cout<<fact(dis.size())<<endl;

    return 0;
}
