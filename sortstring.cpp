#include <iostream>
using namespace std;

// int main(){
//     string s = "tushar";
//     int n=s.length();
//     for(int i = 0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(s[i]>s[j]){
//                 char temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }

//     cout<<s;
// }
int main(){
int arr[] = {1,2,3,4,5};
int n=5;
int i=0,j=n-1;
while(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; 

    i++;
    j--;
}
 
cout<<"Reversed Array : ";
for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}

}

