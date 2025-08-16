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
    int result=0;
    int a=0,b=0,c=0;
    for (int i = 0; i < n; i++)
    {
        int x,y,z;cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    if(a==0 && b==0 && c==0)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    



return 0;
}