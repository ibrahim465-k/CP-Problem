//Bismillahir Rahmanir Rahim//
//Author : Md. Ibrahim Khan//

#include<bits/stdc++.h>
#define ll long long
#define srt(x) sort(x.begin(), x.end())
#define rev(x) reverse(x.begin(), x.end())
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   optimize();
    int n;cin>>n;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    srt(v);
    for (int i = 0; i < n-1; i++)
    {
        if(v[i].second>v[i+1].second ){
            cout<<"Happy Alex"<<"\n";
            return 0;
        
    }
}
    cout<<"Poor Alex"<<"\n";
    



return 0;
}