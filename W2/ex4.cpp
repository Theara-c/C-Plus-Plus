#include <iostream>
using namespace std;

int sumRow(const int m[3][3], int row){
int sum = 0;
for( int i=0; i<3; i++){
    sum+= m[row][i];
}
return sum;
}
int sumCol (const int m[3][3], int col){
int sum  = 0;
for( int i=0; i<3; i++){
    sum+=m[i][col];
}
return sum;
}

int main (){
    int m[3][3] = { 
    { 1, 2, 3 }, 
    { 4, 5, 6 }, 
    { 7, 8, 9 } }; 
        for( int i = 0; i< 3; i++){
            cout << "Sum of row "<< i+1 <<" = "<< sumRow(m, i) << "\n";
        }
        for( int i = 0; i< 3; i++){
            cout << "Sum of col "<< i+1 <<" = "<< sumCol(m, i) << "\n";
        }      

    return 0;

}