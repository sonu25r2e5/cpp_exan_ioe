// program passing by argument by reference. program. 


#include <iostream>
#include <string.h>
using namespace std;
void swap(int &a,int &b); 
 
int main() {
 int x, y; 
 cout << "enter you two number"<< endl;
 cin >> x >> y ; 
 cout << "before swapping the number are X =  " << x << " and Y : " << y << endl;
 swap(x, y); 
 cout << "after swapping the number are X = " << x << " and Y: " << y;  
    return 0;
}


void swap(int &a, int &b){
    int temp; 
    temp = a; 
    a = b; 
    b = temp; 
}