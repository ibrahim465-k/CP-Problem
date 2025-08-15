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
        int n,s;cin>>n>>s;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            v.push_back(a);
        }
        int minimum=min(abs(s-v[0]),abs(s-v[n-1]));
        int result=minimum+(abs(v[0]-v[n-1]));
        cout<<result<<"\n";
        
    }
    



return 0;
}