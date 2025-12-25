#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n<=1){
        cout<<"Not a Prime Number";  
    }
    bool isPrime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = false;
        }
    }

    if(isPrime){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }

}