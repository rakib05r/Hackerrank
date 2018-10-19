#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    int n,p,q,r,t;
    p=q=r=t=0;
    cin>>n;
    cin>>s;
    int i;
    for(i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z' )
            p++;
        if(s[i]>='A' && s[i]<='Z' )
            q++;
        if(s[i]>='0' && s[i]<='9' )
            r++;
        if( s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' ||s[i]=='%' || s[i]=='^' ||s[i]=='*' || s[i]=='*' || s[i]=='()'|| s[i]=='-' || s[i]=='+' || s[i]==')')
            t++;

    }
    int m=0;
    if(p==0)
    m++;
    if(q==0)
    m++;
    if(r==0)
    m++;
    if(t==0)
    m++;
    if(n<6){
        if(6-n>=m) {
         cout<<6-n;
         }
        else{
        cout<<m;
           }
    }
    else{
    cout<<m;
    }
    return 0;
}
