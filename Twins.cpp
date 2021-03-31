
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
   int n;cin>>n;
   vector<int>v;
   int sum=0;
   for(int i=0;i<n;i++){
       int b;cin>>b;
       sum+=b;
       v.push_back(b);
       
   }
   int half=sum/2;
   int count=0;
   sort(v.begin(),v.end());
   int res=0;
   for (int i = v.size()-1; i >=0; i--)
   {
       if(res<=half){
           res=res+v[i];
           count++;
       }
   }
   cout<<count;

    
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
