/*
Create a class mdistance to store the values in meter and centimeter to store values in feet and inches. Perfomr 
addition of objects of mdistance and object of distance by using friend function . 
*/


//2069 Chaitra 
#include <iostream>
#include <string.h>
using namespace std;
class edistance; // forward declaration 
class mdistance{
    private: 
        float meter; 
        float centimeter; 
        public: 
        //constructor. 
        mdistance(float m1, float c1){
            meter = m1; 
            centimeter = c1; 
        }

        // Friend function declaration
        // A friend function is a function that is not a member of the class but has access to its private and protected members.
        // It is declared by using the 'friend' keyword inside the class.
        // Friend functions are useful when you need to allow a non-member function to access the private data of a class.
        friend void addDistance(mdistance one, edistance two);
}; 

class edistance{
    private: 
        float feet;
        float inches; 
    public: 
    // constructor. 
     edistance(float f1, float i1){
        feet = f1; 
        inches = i1; 
     }
     friend void addDistance(mdistance one, edistance two);
};

void addDistance(mdistance one, edistance two) {
    // Convert centimeters to meters
    float c1 = one.centimeter / 100;
    // Add the converted centimeters to the meters value
    float m1 = one.meter + c1;
    // Convert inches to feet
    float i1 = two.inches / 12;
    // Add the converted inches to the feet value
    float f1 = two.feet + i1;
    // Convert the total feet to meters (1 foot = 0.3048 meters)
    float met = m1 + f1 * 0.3048;
    // Extract the integer part of the meters
    int mm = int(met);
    // Extract the fractional part of the meters and convert to centimeters
    float cc = (met - mm) * 100;
    // Output the result in meters
    cout << "Meter: " << mm << endl;
}

int main() {
mdistance m(4,5);
edistance e(2,4);
// Call the friend function to add the distances and display the result
addDistance(m, e);
    return 0;
}