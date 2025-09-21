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
        for (int i = n; i >=1; i--)
        {
            cout<<i<<" ";
        }
        cout<<n<<" ";
        for (int i = 1; i <n; i++)
        {
            cout<<i<<" ";
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