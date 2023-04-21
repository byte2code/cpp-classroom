// Example program
#include <iostream>
#include <string>
using namespace std;


// calculator program
int main()
{
    // Operation +,-,*,/
    // step 1: Take user input
    // step 2: Validate user input
    // step 3: Ask for operation to do
    //  display result
    
    // adv: directly calculate the value
    double result, first_num, second_num;
    char operation, choice;
    
    do{
        cout << "Enter first and second number (space separated): ";
        cin >> first_num >> second_num;
        cout << "Enter the operator to perform operation: (+, -, *, /) : ";
        cin >> operation;
        
        
        switch(operation){
            case '+':
                result = first_num + second_num;
                break;
            case '-':
                result = first_num - second_num;
                break;
            case '*':
                result = first_num * second_num;
                break;
            case '/':
                // anythin/0 = inf
                if (second_num == 0){
                    cout << "Cannot divide by 0" << "\r"; 
                    continue;
                }
                result = first_num / second_num;
                break;
            default:
                cout << "Invalid operation!" << endl;
                continue;
        }
        cout << first_num << " " << operation << " " << second_num << " = " << result << endl;
        cout << "Do you want to continue (y/n): " << endl;
        cin >> choice;
        
    } while(choice == 'y');
     cout << "Goodbye!" << endl;
  
  return 0;
}
