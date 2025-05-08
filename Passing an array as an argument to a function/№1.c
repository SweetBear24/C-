#include<iostream>
using namespace std;

int sumArray(int arr[], int size);

int main(){
    
    int numbers[] = {1, 2, 3, 4, 5};
    int result = sumArray(numbers, 5); 
    cout << result << endl;
  
    return 0;
}

int sumArray(int arr[], int size){

    int sum = 0;
    for(int i = 0;  i < size; i++){
        sum = sum + arr[i];
    }
    
    return sum;
}