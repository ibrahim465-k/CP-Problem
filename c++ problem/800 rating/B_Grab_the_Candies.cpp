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
        int n,sum1=0,sum2=0;cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]%2==0){
                sum1+=v[i];
            }
            else{
                sum2+=v[i];
            }
        }
        if(sum1>sum2){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        
    }
    



return 0;
}