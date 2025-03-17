/*
Create a class called time1 with data member , hour, minuete second and day. INitialize all data member using constructor . Write a program to add new two time1 object
using necessary member fuction and display the result 
*/

#include <iostream>
#include <string.h>
using namespace std;
class time1
{
    int hr, min, sec, day; // Declaration of hour, minutes, seconds, and day.

public:
    // Default constructor for the time1 class
    time1() {
        day = 0;  // Initialize day to 0
        hr = 0;   // Initialize hour to 0
        min = 0;  // Initialize minute to 0
        sec = 0;  // Initialize second to 0
    }

    // Parameterized constructor for the time1 class
    time1(int d, int h, int m, int s) {
        day = d;  // Initialize day with the provided value
        hr = h;   // Initialize hour with the provided value
        min = m;  // Initialize minute with the provided value
        sec = s;  // Initialize second with the provided value
    }

    // Function to display the time in a readable format
    void display() {
        cout << day << " Day " << hr << " Hours " << min << " Minutes and " << sec << " seconds " << endl;
    }

    // Function to add two time1 objects and store the result in the current object
    void add(time1 t1, time1 t2) {
        sec = t1.sec + t2.sec; // Add seconds from both objects
        min = t1.min + t2.min + sec / 60; // Add minutes and carry over extra seconds to minutes
        sec = sec % 60; // Keep only the remaining seconds after carrying over to minutes
        hr = t1.hr + t2.hr + min / 60; // Add hours and carry over extra minutes to hours
        min = min % 60; // Keep only the remaining minutes after carrying over to hours
        day = t1.day + t2.day + hr / 24; // Add days and carry over extra hours to days
        hr = hr % 24; // Keep only the remaining hours after carrying over to days
    }
};

int main() {
    // Create three time1 objects with different initial values
    time1 t1(1, 12, 15, 90), t2(3, 10, 25, 10), t3;

    // Add t1 and t2, and store the result in t3
    t3.add(t1, t2);

    // Display the result of the addition
    cout << "Addition of two times is " << endl;
    t3.display();

    return 0; // Return 0 to indicate successful execution
}