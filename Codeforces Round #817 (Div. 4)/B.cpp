#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--){

int l;
cin>>l;
char a[l];
char b[l];
for(int i=0;i<l;i++){
    cin>>a[i];
    if(a[i]=='G'){
        a[i]='B';
    }
}
for(int i=0;i<l;i++){
    cin>>b[i];
    if(b[i]=='G'){
        b[i]='B';
    }
}
     int flag=0;
for(int i=0;i<l;i++){

  if(a[i]!=b[i]){

   flag=1;
break;
  }

};
if(flag==1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
}
