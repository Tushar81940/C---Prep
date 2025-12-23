#include<iostream>
using namespace std;
class Person{
public:
    void speak(){
        cout<<"Person can speak "<<endl;
    }
};
class Student:public Person{
    public:
    void study(){
        cout<<"Person Studies";
    }
};
int main(){
    Student s1;
    s1.speak();
    s1.study();
}