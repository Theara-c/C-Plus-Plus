#include <iostream>
using namespace std;

int main()
{
 int n;
 int choice;
 int result ;

 do {
    
    cout << "1. Greet\n";
    cout << "2. Calculate factorial\n";
    cout << "0. Exit.\n";
    cout << "Enter your choice ";
    cin >> choice;
    switch ( choice){
        case 1: 
        cout << "Welcome to jet 2 holiday\n";
        break;
        case 2: 
        result = 1;
        cout << "Enter number";
        cin >>n;
        if (n >0){
        for( int i=n; i>0; i--){
            result = result *i;
        }
        
        cout <<  n<<"! is "<< result << "\n";}
        else {
            cout << "error for negative\n";
        }
        break;
        case 0 : 
        cout << "thank for using our service\n";
        break;
        default : 
        cout << "Error\n";break;
    }

 }while ( choice !=0);
    return 0;
}
