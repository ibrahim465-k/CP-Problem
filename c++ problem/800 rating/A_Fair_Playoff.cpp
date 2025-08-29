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
    int s1,s2,s3,s4;cin>>s1>>s2>>s3>>s4;
    vector<int>v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    v.push_back(s4);
    int a=max(s1,s2);
    int b=max(s3,s4);
    sort(v.begin(),v.end(),greater<int>());
    if(a==v[0] && b==v[1]){
        cout<<"YES"<<"\n";
    }
    else if(a==v[1] && b==v[0]){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
   }
   
    



return 0;
}