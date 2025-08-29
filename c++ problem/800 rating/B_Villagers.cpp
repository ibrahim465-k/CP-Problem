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
        if(abs(a-b)%3 != 0){
            cout<<"NO"<<"\n";
            return 0;
        }
        else if(abs(abs(c-a)-abs(d-b))%3 != 0){
            cout<<"NO"<<"\n";
            return 0;
        }
        else {
            cout<<"YES"<<"\n";
        }
    }
    



return 0;
}