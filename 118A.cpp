
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
   string s;cin>>s;
  transform(s.begin(),s.end(),s.begin(), :: tolower);
   stack<char>st1;
   stack<char>st2;
   for(int i=0;i<s.length();i++){
       st1.push(s[i]);
   }
   while(!st1.empty()){
       st2.push(st1.top());
       st1.pop();
   }
   string res="";
   while(!st2.empty()){
       char ch=st2.top();
       if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
           st2.pop();
       }
       else{
           res=res+"." +ch;
           st2.pop();
       }
       
   }
   cout<<res;
    
}


signed main() {
    code_faster
	int testacse;
   testacse = 1;
   cin>>testacse;
     while(testacse--){
      solve();
    }

 
    
    return 0;

}
