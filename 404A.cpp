#include<bits/stdc++.h>
using namespace std;
#define maxi 400
int main(){

    int n;cin>>n;
    char arr[maxi][maxi];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }
    cout<<endl;
    set<char>st1,st2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==j ||  (i==j-n+1) ){
            if(isalpha(arr[i][j])){
            st1.insert(arr[i][j]);
            }
        }
        else{
            if(isalpha(arr[i][j])){
            st2.insert(arr[i][j]);
            }
        }
    }
    }
    if(st1.size()+st2.size()==2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}