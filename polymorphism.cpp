#include<iostream>
using namespace std;
class Math{
public:
int add(int a, int b){      //same name 
    return a+b;
}
int add(int a, int b, int c){     //different parameters
    return a+b+c;
}
};
int main(){
    Math m;
    cout<<m.add(2,3)<<" ";
    cout<<m.add(2,3,4);
}