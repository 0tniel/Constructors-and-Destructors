//Otniel Jhirad
//23070123069
//ENTC A3
//Parameterized Constructor
#include <iostream>
using namespace std;

class Numbers {
public:
    int num1;
    int num2;

public:
    Numbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    void displayNumbers() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Numbers numbers(a, b);
    numbers.displayNumbers();
    return 0;
}
/*
Output
Enter two numbers: 1 2
Number 1: 1
Number 2: 2
*/

