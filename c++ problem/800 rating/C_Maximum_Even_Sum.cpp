//Bismillahir Rahmanir Rahim//
//Author : Md. Ibrahim Khan//

#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int T = 1; T <= t; T++)
#define ll long long
#define srt(x) sort(x.begin(), x.end())
#define rev(x) reverse(x.begin(), x.end())
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void boss()
{
    ll a,b;cin>>a>>b;
    if(a%2==0 && b%2==1){cout<<-1<<"\n";}
    else if(a%2==1 && b%4==0){
        cout<<(((b/2)*a)+(b/(b/2)))<<"\n";
    }
    else if(a%2==1 && b%2==0 && b%4!=0){
        cout<<-1<<"\n";
    }
    else if(a%2==1 && b%2==1){
        cout<<(b*a + 1)<<"\n";
    }
    else if(a%2==0 && b%2==0){
        cout<<(a*(b/2) + (b/(b/2)))<<"\n";
    }

}



int main()
{
    optimize();
    testcase
    boss();
    return 0;
}