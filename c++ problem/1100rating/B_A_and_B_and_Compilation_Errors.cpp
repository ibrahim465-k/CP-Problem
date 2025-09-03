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
    ll n;cin>>n;
    ll sum1=0,sum2=0,sum3=0;
    vector<ll>v1(n),v2(n-1),v3(n-2);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
        sum1+=v1[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        cin>>v2[i];
        sum2+=v2[i];
    }
    for (int i = 0; i < n-2; i++)
    {
        cin>>v3[i];
        sum3+=v3[i];
    }
    cout<<abs(sum1-sum2)<<"\n";
    cout<<abs(sum2-sum3)<<"\n";



return 0;
}