#include<iostream>
using namespace std;

void secondLargest(int arr[],int n){
    if(n<2){
        cout<<"Second largest does not exist. ";
        return;
    }

    //Intialize
    int largest;
    int secondlargest;

    if(arr[0]>arr[1]){
        largest = arr[0];
        secondlargest = arr[1];
    }else{
        secondlargest = arr[0];
        largest = arr[1];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>largest){
           secondlargest = largest; 
           largest = arr[i];
        }
        else if(arr[i]>largest && arr[i]<secondlargest){
            secondlargest = arr[i];
        }
    }

    if(largest == secondlargest)
    cout<<"Second Largest does not exist ";
    else
    cout<<"Second Largest : "<<secondlargest;
}

int main(){
    int arr[] = {2,5,6,7,2,6,8};
    int n = 7;
    secondLargest(arr,n);
    return 0;
}
