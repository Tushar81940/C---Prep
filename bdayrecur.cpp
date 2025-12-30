#include<iostream>
using namespace std;

void fun3(int n){
    if(n==0){
        cout<<"Happy Birthday !";
        return ;
    }
    cout<<n<<" days left for Birthday !"<<endl;
    fun3(n-1);
}

int main(){
    int n = 5;
    fun3(n);
    return 0;
}