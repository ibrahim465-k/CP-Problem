//Bismillahir Rahmanir Rahim//
//Author : Md. Ibrahim Khan//

#include<bits/stdc++.h>
#define ll long long
#define srt(x) sort(x.begin(), x.end())
#define rev(x) reverse(x.begin(), x.end())
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int is_prime(ll value){
    int count=0;
    if(value==1){return 0;}
    else {
        for (int i = 2; i*i <=value ; i++)
        {
            if(value%i==0){
                 count=1;
                 break;
            }
       
        }
    }
    if(count>0){return 0;}
    else return 1;
}

int main()
{
   optimize();
    int n;cin>>n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        ll root=sqrt(v[i]);
        if( (root*root) ==v[i] && is_prime(root) ){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    



return 0;
}