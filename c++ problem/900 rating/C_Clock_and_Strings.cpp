//Bismillahir Rahmanir Rahim//
//Author : Md. Ibrahim Khan//

#include<bits/stdc++.h>
#define ll long long
#define srt(x) sort(x.begin(), x.end())
#define rev(x) reverse(x.begin(), x.end())
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isbetween(int a,int b,int x){
    return(x>= min(a,b) && x<=max(a,b));
}
int main()
{
   optimize();
    int t;cin>>t;
    while (t--)
    {
        int a,b,c,d;cin>>a>>b>>c>>d;
        int count=0;
        if(isbetween(a,b,c) && !isbetween(a,b,d)){
            cout<<"YES"<<"\n";
        }
        else if(!isbetween(a,b,c) && isbetween(a,b,d)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        
    }
    



return 0;
}