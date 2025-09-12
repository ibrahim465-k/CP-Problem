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
        int n,ans=0;cin>>n;
        string s;cin>>s;
        string p=s;
        srt(p);
        for (int i = 0; i < n; i++)
        {
            if(p[i]!=s[i]){
                ans++;
            }
        }
        cout<<ans/2<<"\n";

    }
    



return 0;
}