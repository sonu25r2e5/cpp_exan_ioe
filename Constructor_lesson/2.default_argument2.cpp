// write a meaning ful program illustrating the use of function overloading and default arguments. 

#include <iostream>
#include <string.h>
using namespace std;
// default arguments. assigned to it. 
int simple_interest(int principal=10, int time=2, int rate=5){
    return ((principal*time*rate)/100);
}
 
int main() {
   int principle, time, rate; 
   cout << "Your default simple interest is : " << simple_interest()<< endl;
   // user required simple interest . one arguements 
   cout << "Enter your principle: "; 
   cin >> principle; 
    cout << "your one argument simple interest is: " << simple_interest(principle) << endl;
    // your 2nd argument is
    cout << "Enter your principle and time ";
   cin >> principle >>  time; 
    cout << "your one argument simple interest is: " << simple_interest(principle,time) << endl;
    // your 3rd arguemnt is 
    cout << "enter your principle and time and rate: " ;
    cin >> principle >>  time  >> rate ; 
    cout << "your 3rd argument is given below:  " << simple_interest(principle,time,rate);
    return 0;
}