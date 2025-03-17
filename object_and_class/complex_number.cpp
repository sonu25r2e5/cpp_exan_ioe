// 2077 bhadra question . ioe examination 

#include <iostream>
#include <string.h>
using namespace std;
// decalre class for complex number 
class complex {
    int real, imag; 
    public: 
        complex(){
            real = 0; 
            imag = 0; 
        }
        complex(int r, int i){
            real = r; 
            imag = i ;
        }
    complex multiComplex(complex);
    void display(){
        cout << "(" <<real << "+" << imag << "i)" << endl;
        }

}; 

// complex class complex calling
complex complex::multiComplex(complex c1){
    complex temp; 
    temp.real = (real*c1.real - imag*c1.imag); // calcualting real number
    temp.imag = (real*c1.imag +   imag*c1.real);    // calulating imag inumber
    return temp; 
}


int main() {
   complex c1(2,3), c2(4,5), c3; 
   cout << "multiplication of Complex number is " << endl; 
   c3 = c1.multiComplex(c2);
   c3.display(); 
    return 0;
}