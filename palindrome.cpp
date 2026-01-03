#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0,temp;
    temp = n;
    while(n>0){
        rev = rev*10+(n%10);
        n=n/10;
    } 
    
    if(rev==temp){
         cout<<"Palindrome";
        }else{
            cout<<"Not Palindrome";
        }
}
