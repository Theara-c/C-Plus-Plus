#include <iostream>
using namespace std;
int main()
{
    int studentCount = 30;
    float temperature = 36.6;
    char grade = 'A';
    bool passed = true;
    cout << "Number of students: " << studentCount << endl;
    cout << "Temperature: " << temperature << "°C" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << (passed ? "Yes" : "No") << endl;
    return 0;
}
