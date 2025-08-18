#include <iostream>
using namespace std; 

int factorialIter ( int n){
    int result = 1;
    if( n == 0){
    return result;
    }
 for( int i = n; i> 0; i--){
    result *= i;
 }
 return result;
}
int factorialRec ( int n){

    if( n <=1 )  {
        return 1;
    }
    if (n > 1){
        return n * factorialRec(n-1);
    }

    return 1;
}

int main (){
    int n = 5; 
    cout << n << "! iterative = " << factorialIter( n) << "\n";
    cout << n << "! recursive = " << factorialRec (n) << "\n";
    return 0;
}