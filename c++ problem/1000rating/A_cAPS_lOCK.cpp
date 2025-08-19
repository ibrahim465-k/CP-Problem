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
    string s,res;cin>>s;
    if(isupper(s[0])){
        res+=s[0];
        for (int i = 1; i < s.length(); i++)
        {
            if(islower(s[i])){
                res+=s[i];
            }
            else{
                res+=tolower(s[i]);
            }
        }   
    }
    else{
        res+=toupper(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            if(isupper(s[i])){
                res+=tolower(s[i]);
            }
            else{
                res+=toupper(s[i]);
            }
        }
        
    }
    cout<<res<<"\n";


return 0;
}