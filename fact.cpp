#include<iostream>
using namespace std;
// int main(){
//     int n=5;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     cout<<fact;
// }

// void looping(){
//     for(int i=100;i>=1;i--){
//         cout<<i<<endl;
//     }
// }

// void countDigits(int n){
//     int count = 0;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;

// }

// int main(){
//     // looping();
//     countDigits(56);
//     return 0;
// }

// int main(){
//     int n; int fact=1;
//     cout<<"Enter the number ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"Your Factorial is: "<<fact;
// }

// int main(){
//     int n=5;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     cout<<"Factorial is : "<<fact;
// }

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the numeber to get the factorial :";
    cin>>n;
    cout<<"Your factorial is : "<<factorial(n);
    return 0;
}