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
    string s1="qwertyuiop",s2="asdfghjkl;",s3="zxcvbnm,./";
    char ch;cin>>ch;
    string s;cin>>s;
    vector<string>res(s.length());
    if(ch=='R'){
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < s1.length() ; j++)
            {
                    if(s[i]==s1[j]){
                        res[i]=s1[j-1];
                    }
            }
            for (int j = 0; j < s2.length() ; j++)
            {
                    if(s[i]==s2[j]){
                        res[i]=s2[j-1];
                    }
            }
            for (int j = 0; j < s3.length() ; j++)
            {
                    if(s[i]==s3[j]){
                        res[i]=s3[j-1];
                    }
            }
            
        }
        
    }

    else{
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < s1.length() ; j++)
            {
                    if(s[i]==s1[j]){
                        res[i]=s1[j+1];
                    }
            }
            for (int j = 0; j < s2.length() ; j++)
            {
                    if(s[i]==s2[j]){
                        res[i]=s2[j+1];
                    }
            }
            for (int j = 0; j < s3.length() ; j++)
            {
                    if(s[i]==s3[j]){
                        res[i]=s3[j+1];
                    }
            }
            
        }
        
    }
    for(auto u:res){
        cout<<u;
    }

return 0;
}