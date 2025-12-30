#include<iostream>
using namespace std;
// int main(){
// int a,b,n;
// cout<<"Enter the number of Fibonacci terms : ";
// cin>>n;
// a=0;
// b=1;
// cout<<"Fibonacci series : ";
// for(int i=0;i<n;i++){
//     cout<<a<<" ";
//     int next = a+b;
//     a=b;
//     b=next;
// }
// cout<<endl;
// return 0;
// }

//Using recursion

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    cout<<fibonacci(7);
    return 0;
}
