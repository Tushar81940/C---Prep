#include<iostream>
using namespace std;
int main(){
    string s = "tushar";
    string t = "tusaahr";
    int freq[26] = {0};
    for(char c : s)
        freq[c-'a']++;
    for(char c : t)
        freq[c-'a']--;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"Not Anagram";
            return 0;
        }       
}
    cout<<"Anagram";
    return 0;

}