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
        int y=n%2020;
        int x=((n-y)/2020)-y;
        if(x>=0){cout<<"YES"<<"\n";}
        else{cout<<"NO"<<"\n";}
    }
    



return 0;
}