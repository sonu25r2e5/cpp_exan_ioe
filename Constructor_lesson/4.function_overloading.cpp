// wap to find volumne of different shape using function overloading. 

#include <iostream>
#include <string.h>
using namespace std;
int volume(int);    // volume for cube
double volume(double, int); // volume for cylinder 
long volume(long, int, int);    // volume for rectangle

int main() {
    cout << "the volume of cube: " << volume(10) << endl;
    cout << "the volume of cylinder is: " << volume(2.1,8) << endl; 
    cout << "The volume of rectangle is : " << volume(100L,75,15);
    return 0; 
}

// for cube
int volume(int s){
 return (s*s*s);
}

// for cylinder height and radiu

double volume(double r, int h){
    return(3.1459*r*r*h);
}

long volume(long l , int b, int h){
    return (l *b * h);
}