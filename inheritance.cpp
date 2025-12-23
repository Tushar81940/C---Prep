#include<iostream>
using namespace std;
class Employee{
    public :
    int id;
    float salary;
    Employee(int inpId){
        id = inpId;
        salary =34.0;
    }
    Employee(){}
};

class Programmer : public Employee
{
    public : 
    Programmer (int inpId)
    {
        id = inpId;
    }
    int languageData = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary;
    Programmer skillF(10);
    cout<<skillF.languageData<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}