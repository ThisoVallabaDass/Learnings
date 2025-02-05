#include<bits/stdc++.h>
using namespace std;
int simple_interest(int p,int n,int r){
    int si=(p*n*r)/100;
    return si;
}
int main(){
    int p,n,r;
    cout<<"Enter principle:"<<endl;
    cin>>p;
    cout<<"Enter no of years:"<<endl;
    cin>>n;
    cout<<"Enter rate of interest:"<<endl;
    cin>>r;
    cout<<"the simple interest is:"<<simple_interest(p,n,r);

}