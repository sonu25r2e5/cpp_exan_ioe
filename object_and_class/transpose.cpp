/*
write down a program to find the transpose of a given matrix using the concept of object oreiented programming.
[2072 Chaitra]
*/
// This program finds the transpose of a given 3x3 matrix using object-oriented programming.

#include <iostream>
#include <string.h>
using namespace std;

// Define a class named 'matrix'
class matrix {
    int a[3][3]; // Original matrix
    int b[3][3]; // Transposed matrix

public:
    // Constructor to initialize the matrix
    matrix();
    
    // Function to compute the transpose of the matrix
    void transpose();
    
    // Function to display the original and transposed matrices
    void display();
};

// Constructor definition
matrix::matrix() {
    cout << "Enter the matrix:" << endl; 

    // Input the elements of the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
}

// Function to compute the transpose of the matrix
void matrix::transpose() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = a[j][i];
        }
    }
}

// Function to display the original and transposed matrices
void matrix::display() {
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

// Main function
int main() {
    matrix m; // Create an object of class 'matrix'
    cout << endl; 
    m.transpose(); // Compute the transpose of the matrix
    m.display(); // Display the original and transposed matrices
    return 0;
}
