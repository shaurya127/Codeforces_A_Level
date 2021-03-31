
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
   int arr[11]={4,7,44,47,477,744,777,444,447,474,774};
//    int n=sizeof(arr)/sizeof(arr[0]);
    bool ok=true;
    for (int i = 0; i < 11; i++)
    {
        if(n%arr[i]==0){
            cout<<"YES";
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"NO";
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
