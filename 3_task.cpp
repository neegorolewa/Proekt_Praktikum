#include <iostream>
using namespace std;

int main() {
    string firstLine;
    string secondLine;
    int result;
    cout << "Enter first line: ";
    cin >> firstLine;
    cout << "Enter second line: ";
    cin >> secondLine;
    result = firstLine.compare(secondLine);
    switch(result)
    {
        case -1:
            cout << firstLine << " < " << secondLine << endl;
            break; 
        case 0:
             cout << firstLine << " = " << secondLine << endl;  
             break;
        case 1:
             cout << firstLine << " > " << secondLine << endl;  
             break;  
    }
}