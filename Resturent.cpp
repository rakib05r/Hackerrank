//*Md.Rokibul Islam

#include<bits/stdc++.h>
using namespace std;
int resturent(int x,int y){
    int z;
    while ( x != 0 ) {
     z = x;
     x = y%x;
     y = z;
  }
  return y;
}
int main(){

    int t,i,a,b;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        cout<<(a/resturent(a,b)*b/resturent(a,b))<<endl;
    }
    return 0;
}
