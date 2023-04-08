#include <iostream>
using namespace std;

int main() {

    int a, b, c, largest;
    cout << "Enter three numbers (space separated): " << endl;
    cin >> a >> b >> c;

    if(a>b){
        if (a>c){
            largest = a;
        }else{
            largest = c;
        }
    }else{
        if(b>c){
            largest = b;
        }else{
            largest = c;
        }
    }
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    cout << "Largest = " << largest;

    return 0;
}