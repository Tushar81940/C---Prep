#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,2,4,3,3};
    int n = 8;
    int freq[100] = {0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]==2){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}