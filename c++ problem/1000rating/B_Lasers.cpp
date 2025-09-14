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
    ll n,m,x,y;cin>>n>>m>>x>>y;
    vector<ll>v1(n),v2(m);
    for (ll i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin>>v2[i];
    }
    cout<<m+n<<"\n";

}



int main()
{
    optimize();
    testcase
    boss();
    return 0;
}