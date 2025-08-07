#include <iostream>
using namespace std;

int main (){
   float studentScore = 100;
   int SduentRecord = 2;
   float student_score = 0.0;
   const int MAX_BUFFER_SIZE = 256;
    char studentName[MAX_BUFFER_SIZE] = "John Doe";
    cout << "Student Name: " << studentName << endl;
    cout << "Student Score: " << studentScore << endl;
    cout << "Student Record: " << SduentRecord << endl;
    cout << "Student Score (float): " << student_score << endl;
    return 0;
}
