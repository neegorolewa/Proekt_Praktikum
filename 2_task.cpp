#include <iostream>
using namespace std;

int main() {
    string defLine;
    int operations; 
    cout << "Enter your line: ";
    getline(cin, defLine);
    cout << "Operation:\n(1) insert;\n(2) erase;\n(3) replace;\n(4) find;" << endl;
    cout << "Select operation: ";
    cin >> operations;  
    switch(operations)
    {
        case 1: 
        {
            int param;
            string substring;
            cout << "Enter where to insert: ";
            cin >> param;
            cout << "Enter substring: ";
            cin >> substring;
            defLine.insert(param, substring);
            cout << "Your line = " << defLine << endl;
            break;
            };
        case 2:
        {
            int position;
            int number;
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter number of symbol: ";
            cin >> number;
            defLine.erase(position, number);
            cout << "Your line = " << defLine << endl;
            break;
        };
        case 3:
        {
            int position;
            int number;
            string stroka;
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter number of symbol: ";
            cin >> number;
            cout << "Enter line to replace: ";
            cin >> stroka;
            defLine.replace(position, number, stroka);
            cout << "Your line = " << defLine << endl;
            break;
        };
        case 4:
        {
            string findLine;
            cout << "Enter the line to find: ";
            cin >> findLine;;
            int index = defLine.find(findLine);
            cout << "Index first entry \"" << findLine << "\" = " << index << endl;
            break; 
        } 
    }
}