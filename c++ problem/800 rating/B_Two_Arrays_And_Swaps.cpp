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
        int n,k;cin>>n>>k;
        vector<int>v1(n),v2(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>v2[i];
        }
        srt(v1);
        sort(v2.begin(),v2.end(),greater<int>());
        for (int i = 0; i < k; i++)
        {
            if(v2[i]>v1[i]){
                v1[i]=v2[i];
            }
        }
        int sum=0;
        for(auto u:v1){
            sum+=u;
        }
        cout<<sum<<"\n";
        
    }
    



return 0;
}