#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1001];
    gets(s);
    set<char>st;
    int ln=strlen(s);
    for(int i=0;i<ln;i++){
        if(isalpha(s[i])){
        st.insert(s[i]);
        }
    }
    cout<<st.size();
}
