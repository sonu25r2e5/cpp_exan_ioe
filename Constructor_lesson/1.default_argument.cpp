// write a program to display N number of characters by using default arguments for both parameters . Assume that the function default arguments for both parameters. 

// assume the function takes two arguments one character to be printed and other number of charcter tob e printed. 

#include <iostream>
#include <string.h>
using namespace std;
// void defaultfunction(char, int);

// for default you should initialize it above the main program only then only it works. 
void defaultfunction(char a = 'C', int N=10 ){
    cout << a << endl; 
    for (int i = 0; i < N; i++)
    {
        /* code */
        cout << i <<"\t"; 
    }
    
}

int main() {
   defaultfunction();
     
   
    return 0;
}
