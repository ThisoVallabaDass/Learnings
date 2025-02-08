#include<bits/stdc++.h>
using namespace  std;
void selection_sort(int n,int arr[]){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
void buble_sort(int n,int arr[]){
    for (int i = n - 1; i > 0; i--) { 
        int count=0;// Outer loop
        for (int j = 0; j < i; j++) { // Inner loop
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Correct swap
                count=i;
              }
         }
         if(count==0)break;
     }
 }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    buble_sort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

    

