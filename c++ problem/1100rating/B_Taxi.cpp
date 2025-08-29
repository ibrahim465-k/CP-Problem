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
    int n;cin>>n;
    int count=1;
    int c1=0,c2=0,c3=0,c4=0;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for(auto u:v){
        if(u==4){c4++;}
        else if(u==3){c3++;}
        else if(u==2){c2++;}
        else {c1++;}
    }
    cout<<(c4+min(c3,c1)+min(c2,c1))<<"\n";



return 0;
}