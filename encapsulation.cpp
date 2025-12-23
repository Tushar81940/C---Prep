#include<iostream>
using namespace std;
class Student{
    private:
    int marks;

    public:
    void setMarks(int m){
        marks = m;
    }
    int getMarks(){
        return marks;
    }
};

int main(){
    int m;
    Student s1;
    cout<<"Enter Your marks here : ";
    cin>>m;
    s1.setMarks(m);
    cout<<"Marks are : "<<s1.getMarks();
}