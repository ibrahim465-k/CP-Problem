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
    int n;cin>>n;
    vector<int>v1,v2;
    int count=1;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        v1.push_back(a);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if(v1[i]<=v1[i+1]){
            count++;
        }
        else{
            v2.push_back(count);
            count=1;
        }

    }
    v2.push_back(count);
    sort(v2.begin(),v2.end(),greater<int>());
    cout<<v2[0]<<"\n";
    



return 0;
}