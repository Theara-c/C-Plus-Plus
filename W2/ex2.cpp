#include <iostream>
using namespace std; 

double computeAverage (const int arr[], int size){
    double sum = 0;
    for( int i = 0; i< size; i++){
        sum+= arr[i];
    }
    return sum/ size;
}
int findMin (const int arr[], int size){
    int min = arr[0];
    for( int i=1; i<size; i++){
        if( min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int findMax (const int arr[], int size){
      int max = arr[0];
    for( int i=1; i<size; i++){
        if( max < arr[i]){
            max = arr[i];
        }
    }
    return max ;
}
void print(const int arr[], int size){
    for( int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main (){
    int arr[] = {3,8,1,9,4,7,2,5,6,0};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << "Array contests: ";
    print(arr, length);
    cout << endl;
    cout <<"Average = " << computeAverage(arr, length) << "\n";
    cout << "Min = " << findMin (arr, length) << "\n";
    cout << "Max = " << findMax ( arr, length);
    return 0;

}