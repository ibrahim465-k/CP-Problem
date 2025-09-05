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
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        vector<pair<int,int>>k(n);
        for (int i = 0; i < n; i++)
        {
            k[i].first=v[i];
            k[i].second=i;
        }
        srt(k);
        if(k[0].first==k[1].first){
            cout<<(k[n-1].second)+1<<"\n";
        }
        else{
            cout<<(k[0].second)+1<<"\n";
        }
        
        
    }
    



return 0;
}