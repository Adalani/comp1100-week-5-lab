#include <iostream>
// This library will allow the program to do some math problems.
#include <math.h>

// This library uses file streams.
#include <fstream>

/*
        Using this, I do not have to write std:: before each element that comes from the
        standard library.
*/
using namespace std;

// The integers that are going to be used for height and width of the triangle are declared.
int height, width;

    /*
        The "root" integer will serve as the root value that would 
        typically be found in the a^2 + b^2 = c^2 equation.
    */
int root = 2;



    /*
        This function will request the user to enter two values so 
        that it can calculate the third side of a triangle
    */
int main() {
    
    // This message is output.
    cout << "Please enter two numbers, pressing enter in between each entry." << endl << endl;
    

    // The two values are requested.
    cin  >> height >> width;

    /*
        The "auto" type will determine the data type to best fit the type of the answer.

        The integer "math" will calculate the square root height squared + width squared.
    */
    auto math = sqrt(pow(height, root)+pow(width, root));

    // ofstream is an output file data type.

    // This section outputs the answer to a separate text file.
    ofstream myFile;
    myFile.open("output.txt");
    myFile << "Your triangle has 3 sides that are: " << height << "cm, " << width << "cm and " << math << "cm.";
    /*
        .close is used to close the file instance.  This is useful when you use 
        more than one program to modify the same file, by preventing an error from showing up saying
        the "file is already open in another instance."
    */
    myFile.close();

    return 0;
}