#include<iostream>
using namespace std;
// class Person{
//     public : 
//     string name;
//     int age;
//     void speak(){
//         cout<<"Person can speak";
//     }
// };
// class Student:public Person{
//  public:
//  void study(){
//     cout<<"Person Studies";                       //Inheritance
//  }    
// };

// int main(){
//     Student s1;
//     s1.speak();
// }


// class Animal{
// public:
// virtual void sound() = 0;

// };                                                //Abstraction and Polymorphism

// class Dog : public Animal{
//     public:
//     void sound(){
//         cout<<"Dog Barks";
//     }
// };

// int main(){
//     Animal* a;
//     Dog d;
//     a=&d;
//     a->sound();
// }



// class Student{
//     private:
//     int marks;
//     public:
//     void setMarks(int m){
//     marks = m;                                          //Encapsulation
//     }
//     int getMarks(){
//         return marks;
//     }
// };


// int main(){
//     Student s1;
//     s1.setMarks(40);
//     cout<<s1.getMarks();
// }





// void bubble_sort(int arr[],int n){
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

// }


// void bubble_sort(int arr[],int n){
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }
// void selection_sort(int arr[], int n){
//     for(int i=0;i<=n-2;i++){
//         int mini = i;
//     for(int j=1;j<=n-1;j++){
//         if(arr[j]<arr[mini]){
//             mini = j;
//         }
//     }
//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i]=temp;
// }
// }

// void selection_sort(int arr[],int n){
//     for(int i=0;i<=n-2;i++){
//         int mini = i;
//     for(int j=1;j<=n-1;j++){
//         if(arr[j]<arr[mini]){
//             mini = j;
//         }
//     }
//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i]= temp;
//     }
// }

// void insertion_sort(int arr[],int n){
//     for(int i=0;i<=n-1;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }
// }

// void insertion_sort(int arr[],int n){
//     for(int i=0;i<=n-1;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             int temp = arr[j-1];
//             arr[j-1]=arr[j];
//             arr[j] = temp;
//             j--;

//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     insertion_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// void removeDuplicate(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i]<<" ";
//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {2,4,5,6,7,2,5,6,7,8};
//     int n = 10;
//     removeDuplicate(arr,n);
//     return 0;
// }



int main(){
    // int n=8;

    // if(n<=1){
    //     return 1;
    // }
    // bool isPrime = true;
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         isPrime= false;
    //         break;
    //     }
    // }

    // if(isPrime){
    //     cout<<"Prime Number";
    // }else{
    //     cout<<"Not a Prime Number";
    // }
}