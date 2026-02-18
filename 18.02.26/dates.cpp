#include <iostream>
using namespace std;

class dates {
public:
    dates() {
        _day = 0;
        _month = 0;
        _year = 0;
    }

    dates(int day, int month, int year) {
        _day = day;
        _month = month;
        _year = year;

    }

    void setDay(int day) {
        _day = day;
    }

    void setMonth(int month) {
        _month = month;
    }

    void setYear(int year) {
        _year = year;
    }

    int getDay() {
        return _day;
    }

    int getMonth() {
        return _month;
    }

    int getYear() {
        return _year;
    }

    void showDate() {
        cout << "my Date" << endl;
        cout << "day: " << _day << endl;
        cout << "month: " << _month << endl;
        cout << "year: " << _year << endl;
    }

private:
    int _day;
    int _month;
    int _year;
};

int main() {
    int day, month, year;   

    cout << "Enter day, month and year: " << endl;
    cin >> day >> month >> year;

    dates myDate(day, month, year);

    myDate.showDate();

    return 0;
}
