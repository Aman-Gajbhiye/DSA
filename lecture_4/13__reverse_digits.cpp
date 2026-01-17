#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num; 

    while (temp != 0) {
        int digit = temp % 10;     
        reversed = reversed * 10 + digit; 
        temp /= 10;  
    }

    cout << "Reversed number of " << num << " = " << reversed;

    return 0;
}
