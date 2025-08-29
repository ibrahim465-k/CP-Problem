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
        for (int i = 1; i <= n; i++)
        {
            cin>>v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                for (int k = j+1; k <= n; k++)
                {
                    if(v[i]<v[j] && v[j]>v[k]){
                        cout<<"YES"<<"\n";
                        cout<<i<<" "<<j<<" "<<k<<"\n";
                        
                    }
                }
                
            }
            
        }
        cout<<"NO"<<"\n";
        
    }
    



return 0;
}