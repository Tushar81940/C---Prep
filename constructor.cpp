#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    Student(){
        name = "Tushar";
        age = 22;
    }
    void display(){
        cout<<name<<" ";
        cout<<age;
    }
};

int main(){
    Student s1;
    s1.display();
    return 0;
}

//Parameterized Constructor 

// class Student{
//     public:
//     string name;
//     int age;
//     Student(string name, int age){
//         this->name = name;
//         this->age = age;
//     }
//     void display(){
//         cout<<name<<" ";
//         cout<<age;
//     }
// };

// int main(){
//     Student s1("Tushar",22);
//     s1.display();
//     return 0;
// }
