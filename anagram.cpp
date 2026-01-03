#include<iostream>
using namespace std;

void sort(string s , int n){
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]>s[j]){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
       }
       cout<<s;
}

int main(){
    string s = "tushar";
    int n = s.length();
    sort(s,n);
    string t ="ustahr";
    sort(t,n);
    if(s==t){
        cout<<"String is anagram";
    }
    return 0;
}