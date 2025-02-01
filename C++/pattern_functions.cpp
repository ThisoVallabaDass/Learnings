#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n)-(2*i+1);j++){
            cout<<"*";
        }
         for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern10(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n)-(2*i+1);j++){
            cout<<"*";
        }
         for(int j=0;j<i;j++){
            cout<<" ";
        }
    cout<<endl;
    }

}
void pattern11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0)start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
       

    }
}
void pattern12(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=0;j<(2*n)-(2*i)-2;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

}
void pattern13(int n){
    int num =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }


}
void pattern14(int n){

}

int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cout<<"Enter the n:"<<endl;
         cin>>n;
                //pattern1(n);
                //pattern2(n);
                //pattern3(n);
                //pattern4(n);
                //pattern5(n);
                //pattern6(n);
                //pattern7(n);
                //pattern8(n);
                //pattern9(n);
                //pattern10(n);
                //pattern11(n);
                //pattern12(n);
                //pattern13(n);
                //pattern14(n);
    }

    

}