// write an examle explaining function overloading in object oreineted porgraming. 2075 ashwin , 2075 chaitra

#include <iostream>
#include <string.h>
using namespace std;
int area(int, int); // for triangle. 
float area(int);  // for cricle. 
float area(float, float); // for rectangle. 
 
int main() {
int base, height, radius; 
float length, breadth; 
 // for area of traingle. 
cout << "enter the breadth and height "; 
cin >> base >> height ; 
cout << "Area of triangle is " << area(base,height) << endl; 
// for area of circle
cout << "Enter radius: "; 
cin >> radius; 
cout << "Area of cricle is " << area(radius) << endl; 
// for rectangel 
cout << "enter length and breadth for rectangle " ; 
cin >> length >> breadth ; 
cout << "area of rectangle is: " << area(length, breadth); 
    return 0;
}

// for area of trainglel 
int area(int base, int height){
    return (0.5*base*height);
}

// for area of cricle 
float area(int radius){
    return(3.145*radius*radius);
}
//for rectangle.
float area(float length, float breadth){
    return(length*breadth);
}