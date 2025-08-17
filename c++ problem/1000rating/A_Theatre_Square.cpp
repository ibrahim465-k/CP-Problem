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
    ll n,m,a;cin>>n>>m>>a;
    ll result =(long long)ceil((double)n / a) * (long long)ceil((double)m / a);
    cout<< result <<"\n";


return 0;
}