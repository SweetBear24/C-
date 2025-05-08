#include<iostream>
using namespace std;

int findMax(int arr[], int size);

int main(){
    
    int numbers[] = {1, 20, 3, 4, 5};
    int max = findMax(numbers, 5); 
    cout << max << endl;
    
    return 0;
}

int findMax(int arr[], int size){

    int max = arr[0];
    for(int i = 1;  i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    return max;
}