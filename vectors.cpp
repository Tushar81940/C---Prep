#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(4,2);
    vector <int> a = {1,2,3,4,5,6};
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    a.push_back(7);  // insert 7 at the end
    cout<<a.front()<<endl;  // diplay the first element in this case 1
    cout<<a.back()<<endl;   // diplay the last element in this case 7
    cout<<a.at(2)<<endl;    //display the second index element 
    cout<<a.capacity()<<endl;  // calculates the capacity
    a.insert(a.begin() + 2,10);  //insert the value 10 after second index
    a.erase(a.begin()+1);        //remove the second index value
      for(int y:a){
        cout<<y<<" ";            //traverse the loop and prints the final vector
    }
    return 0;
}