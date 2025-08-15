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
    string s,s1="WUB";
    cin>>s;
    int pos;
    while ((s.find(s1)) != string::npos) {
        pos=s.find(s1);
        s.replace(pos,s1.length()," ");
    }
    stringstream ss(s);
    string word, result;
    
    while (ss >> word) { 
    if (!result.empty()) result += " ";
    result += word;
    }
    cout<<result<<"\n";
    
    
    



return 0;
}