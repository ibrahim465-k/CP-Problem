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
    int count=0;
    for(auto sr:s){
        if(sr=='H' || sr=='Q' || sr=='9'){
            count++;
        }
    }
    if(count>0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }


return 0;
}