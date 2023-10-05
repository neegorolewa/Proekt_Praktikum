#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter line: ";
    cin >> s;
    cout << "First symbol of line = " << s.front() << endl;
    cout << "Last symbol of line = " << s.back() << endl; 
}