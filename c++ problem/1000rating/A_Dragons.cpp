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
    int s,n,count=0;cin>>s>>n;
    vector<pair<int,int>>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    srt(v);
    for (int i = 0; i < n; i++)
    {
        if(s>v[i].first){
            count++;
            s+=v[i].second;
        }
    }
    if(count==n){cout<<"YES"<<"\n";}
    else{cout<<"NO"<<"\n";}
    



return 0;
}