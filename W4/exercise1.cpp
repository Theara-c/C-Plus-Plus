#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    getline(cin, filename);
    // 1. Write initial entries
    ofstream outFile(filename, ios:: out);
    if (!outFile.is_open()) {
        cerr << "Cannot open file for writing\n";
        return 1;
    }
    // TODO: write 5 lines "Name score"
    outFile << "A 100\n";
    outFile << "B 80\n";
    outFile << "C 60\n";
    outFile << "D 40\n";
    outFile << "E 20\n";
    outFile.close();

    // 2. Read and display
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cerr << "Cannot open file for reading\n";
        return 1;
    }
    // TODO: read loop and print
    string text;
    while (getline(inFile, text)){
        cout << text << "\n";
    }
    inFile.close();

    return 0;
}
