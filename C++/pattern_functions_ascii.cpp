#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+n-i-1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0;i<n;i++){
         char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
        cout<<endl;
    }

}
void pattern5(int n){
   for (int i = 0; i < n; i++) {
        char ch = 'A' + (n - 1); // Start from 'E' when n = 5
        for (int j = 0; j <= i; j++) {
            cout << ch;  // Print the current character
            ch = ch - 1; // Move to the previous character
        }
        cout << endl;
    }
}
void pattern6(int n){
    int space = 0;

    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Print stars in decreasing order
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // Print spaces in increasing order
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        // Print stars in decreasing order
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // Increment spaces for the next row
        space += 2;
        cout << endl;
    }

    // Reset space for the lower half
    space = 2 * (n - 1);

    // Lower half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print stars in increasing order
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces in decreasing order
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        // Print stars in increasing order
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Decrement spaces for the next row
        space -= 2;
        cout << endl;
    }

}

int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
       //pattern1(n);
       //pattern2(n);
       //pattern3(n);
       //pattern4(n);
       //pattern5(n);
       //pattern6(n);
        
    }
}