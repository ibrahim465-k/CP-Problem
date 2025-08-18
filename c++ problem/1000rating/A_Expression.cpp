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
    int a,b,c;
    cin>>a>>b>>c;
    int res1= a+(b*c);
    int res2= a*(b+c);
    int res3= a*b*c;
    int res4= (a+b)*c;
    int res5= a+b+c;
    int maximum= max({res1,res2,res3,res4,res5});
    cout<<maximum<<"\n";


return 0;
}