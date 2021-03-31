#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll l,r;cin>>l>>r;
    if(l%2!=0){
        l++;
    }
    if(r-l<2){
      cout<<-1<<endl;
    }
    else{
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    }
}