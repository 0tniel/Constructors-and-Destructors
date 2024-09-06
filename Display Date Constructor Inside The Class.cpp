//Otniel Jhirad
//23070123069
//ENTC A3
//Creating The Constructor Inside The Class
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void displayDate() {
        cout << "Today's Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int day, month, year;

    cout << "Enter today's date (day month year): ";
    cin >> day >> month >> year;
    Date today(day, month, year);
    today.displayDate();

    return 0;
}

