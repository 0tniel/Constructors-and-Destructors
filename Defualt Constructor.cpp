//Otniel Jhirad
//23070123069
//ENTC A3
//Defualt Constructor
#include <iostream>
using namespace std;

class Numbers {
public:
    int num1;
    int num2;

public:
    Numbers() {
        cout << "Enter 1st number: ";
        cin >> num1;
        cout<<"Enter 2nd number: ";
        cin>> num2;
    }
    void displayNumbers() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

int main() {
    Numbers numbers;
    numbers.displayNumbers();
    return 0;
}
/*
Output
Enter 1st number: 1
Enter 2nd number: 2
Number 1: 1
Number 2: 2
*/

