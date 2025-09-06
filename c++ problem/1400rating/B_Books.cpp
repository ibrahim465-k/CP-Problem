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
    ll n,t,ans=0;cin>>n>>t;
    ll sum=0;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll l=0,r=0;
    while (r<n)
    {
        sum+=v[r];
        if(sum>t){
            sum-=v[l];
            l++;
        }
        ans=max(ans,r-l+1);
        r++;
    }
    cout<<ans<<"\n";
    
    



return 0;
}