#include<iostream>
using namespace std;
int main(){
    string s = "tushar";
    int freq[26] = {0};

    for(char c:s){
        freq[c-'a']++;
    }

    for(int i=0;i<26;i++){
        while(freq[i]>0){
            cout<< char(i+'a');
            freq[i]--;
        }
    }
    return 0;
}