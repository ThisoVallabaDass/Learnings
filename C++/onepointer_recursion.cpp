#include<bits/stdc++.h>
using namespace std;
void ftin(int i,int arr[],int n){
    if(i>=n/2)return ;//the recursion stops at the mid of the array
    swap(arr[i],arr[n-i-1]);//n-i-1 gives the last index of the array 
    ftin(i+1,arr,n);//calling the recursion with i+1
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ftin(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}