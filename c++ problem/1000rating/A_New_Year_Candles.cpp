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
    int a,b;cin>>a>>b;
    int h=a;
    while (a>=b)
    {
        h+=(a/b);
        a=(a/b)+(a%b);
    }
    cout<<h<<"\n";

return 0;
}