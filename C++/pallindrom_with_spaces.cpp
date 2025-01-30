#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
    int low=0;
    int high=s.size()-1;
    while(low<=high){
        if(s[low]==s[high]){//checks the first ad last element
            return 1;
        }
        else{
            return 0;
        }
        low++;
        high--;
    }
}

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);//for capital letters
    }
    

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            s.erase(i, 1); // Erase 1 character at index i
            i--; // Decrement i to prevent skipping the next character
        }
    }
    if(ispalindrome(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}
