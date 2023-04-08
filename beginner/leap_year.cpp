// Leap year
// if it is divisible by 400 or divisible by 4 but not by 100

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int year;
    
    cout << "Enter the number" << endl;
    cin >> year;

    if((year % 4 == 0) && (year % 100 == 0) || (year % 400 == 0)){
        cout << year << " is Leap year" << endl;
    }else{
        cout << year << " is not leap year" << endl;
    }
    return 0;
}