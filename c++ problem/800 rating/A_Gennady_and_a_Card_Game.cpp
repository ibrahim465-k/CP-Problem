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
    string s;cin>>s;
    vector<string>v;
    for (int i = 0; i < 5; i++)
    {
        string s;cin>>s;
        v.push_back(s);
    }
    for (int i = 0; i < 5; i++)
    {
        if(s[0]==v[i][0] || s[1]==v[i][1]){
            cout<<"YES"<<"\n";
            return 0;
        }
    }
    cout<<"NO"<<"\n";
    



return 0;
}