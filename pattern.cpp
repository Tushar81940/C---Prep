#include<iostream>
using namespace std;
// int main(){
//     for(int i=0;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// };
// int main() {
//     for (int i = 1; i <= 5; i++) {

//         if (i == 4) {          // line 4 special case
//             for (int j = 1; j <= i; j++) {
//                 cout << "#";
//             }
//         } else {
//             for (int j = 1; j <= i; j++) {
//                 cout << "*";
//             }
//         }

//         cout << endl;
//     }
//     return 0;
// }

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        //Spaces loop
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
            cout<<endl;
    }
}