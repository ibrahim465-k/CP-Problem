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
    int n;cin>>n;
    vector<int>v(n),c;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int k=(n+1)-v[i];
        c.push_back(k);
    }
    for(auto u:c){
        cout<<u<<" ";
    }
    cout<<"\n";
    

}



int main()
{
    optimize();
    testcase
    boss();
    return 0;
}