#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << string(j, '{') << string(j, '}');
        }
        cout<<endl;
    }
}
int main(){
    int n ;
    cin>>n;
    pattern(n);
}