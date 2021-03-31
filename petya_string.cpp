
#include<bits/stdc++.h>
#define vi vector<int>
#define int long long int
#define fox(i,n) for(int i=1;i<=n;i++)
#define fox2(i,n) for(int i=0;i<n;i++)
#define ff first
#define ss second
#define pb push_back
#define code_faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define vp vector<pair<int,int>>
#include <map>
#define mod 1000000007
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 


void solve(){
   
string s1,s2;
cin>>s1>>s2;
transform(s1.begin(),s1.end(),s1.begin(),::tolower);
transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    if(s1==s2){
        cout<<0;
    }
    else if(s1<s2){
        cout<<-1;
    }
    else if(s1>s2){
        cout<<1;
    }
}


signed main() {
    code_faster
	int testacse;
   testacse = 1;
//    cin>>testacse;
    //  while(testacse--){
      solve();
    // }

 
    
    return 0;

}
