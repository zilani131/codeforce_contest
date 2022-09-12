#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int l;
    cin>>l;
    string a[3][l];
    for(int i=0;i<3;i++){
        for(int j=0;j<l;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<l;j++){
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


}
