#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    string company;
    int age;
    void IntroduceYourself(){
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    Employee Employee1;
    Employee Employee2;
    Employee1.name = "Tushar Kumar";
    Employee1.company = "Unemployed";
    Employee1.age = 23;
    Employee2.name = "John Doe";
    Employee2.company = "Amazon";
    Employee2.age = 30;
    Employee1.IntroduceYourself();
    Employee2.IntroduceYourself();
    return 0;
}