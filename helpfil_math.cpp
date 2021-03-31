
#include<bits/stdc++.h>
#define vi vector<int>
// #define int long long int
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
    priority_queue<char, vector<char>,greater<char>>st;
    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
            st.push(s[i]);
        }
    }
    string res="";
    while(!st.empty()){
        res=res+st.top()+"+";
        st.pop();
    }
    int x=res.length()-1;
    res.erase(res.begin()+x);
    cout<<res;
    
    
}


signed main() {
    code_faster
	int testacse;
      solve();

 
    
    return 0;

}
