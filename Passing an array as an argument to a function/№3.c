#include<iostream>
using namespace std;

void doubleArray(int arr[], int size);
void printArray(int arr[], int size);

int main(){
    
    int numbers[] = {1, 2, 3};
    doubleArray(numbers, 3);
    printArray(numbers, 3);

    return 0;
}
void doubleArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        arr[i] = arr[i] *  2;
    }
     return;
}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i]<< endl;
    }
     return;
}
