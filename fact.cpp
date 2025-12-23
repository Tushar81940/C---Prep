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

void looping(){
    for(int i=100;i>=1;i--){
        cout<<i<<endl;
    }
}

void countDigits(int n){
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count;

}

int main(){
    // looping();
    countDigits(56);
    return 0;
}