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
        int a,b,c,d;cin>>a>>b>>c>>d;
        int m=max(a,b);
        int s=min(a,b);
        int m2=max((c-a),(d-b));
        int s2=min((c-a),(d-b));
        if(m<=2*(s+1) && m2<=2*(s2+1)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    



return 0;
}