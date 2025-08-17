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
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
    vector<int>v,c,d;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        v.push_back(a);
        c.push_back(a);
    }
    srt(c);
    if(is_sorted(v.begin(),v.end()) || n==1){
        cout<<"NO";
    }
    else{
        for (int i = 0; i < n; i++)
        {
            if(c[i]!=v[i]){
                d.push_back(v[i]);
            }
        }
        cout<<"YES"<<"\n";
        cout<<d.size()<<"\n";
        for(auto u:d)cout<<u<<" ";
    }
    cout<<"\n";
    }
    
    



return 0;
}