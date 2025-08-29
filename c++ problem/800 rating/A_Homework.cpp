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
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string a;cin>>a;
        int m;cin>>m;
        string b;cin>>b;
        string c;cin>>c;
        deque<char>dq;
        for (int i = 0; i < n; i++)
        {
           dq.push_back(a[i]);
        }
        
        for (int i = 0; i < m; i++)
        {
            if(c[i]=='D'){
                dq.push_back(b[i]);
            }
            else{
                dq.push_front(b[i]);
            }
        }
        string res(dq.begin(),dq.end());
        cout<<res<<"\n";
    }


return 0;
}