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
    if(n==4 || n==7 || n==44 || n==77 || n==47 || n==74 || n==444 || n==777 || n==447 || n==477 || n==744 || n==474 || n==747 || n==774){
        cout<<"YES"<<"\n";
    }
    else if(n%4==0 || n%7==0 ||n%44==0 ||n%77==0 ||n%47==0 ||n%74==0 ||n%444==0 ||n%447==0 ||n%477==0 ||n%474==0 ){
            cout<<"YES"<<"\n";
      }
    else{
        cout<<"NO"<<"\n";
    }


return 0;
}