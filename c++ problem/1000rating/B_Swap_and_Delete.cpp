//Bismillahir Rahmanir Rahim//
//Author : Md. Ibrahim Khan//

#include<bits/stdc++.h>
using namespace std;

#define testcase long long t; cin >> t; for (long long T = 1; T <= t; T++)
#define ll long long
#define srt(x) sort(x.begin(), x.end())
#define rev(x) reverse(x.begin(), x.end())
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void boss()
{
    string s;cin>>s;
    int czero=0,cone=0;
    for(auto u:s){
        if(u=='0')czero++;
        else cone++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        
        if(s[i]=='0'){
            if(cone>0){cone--;}
            else {break;}
        }
        else{
            if(czero>0){czero--;}
            else {break;}
        }
    }
    cout<<max(cone,czero)<<"\n";

}



int main()
{
    optimize();
    testcase
    boss();
    return 0;
}