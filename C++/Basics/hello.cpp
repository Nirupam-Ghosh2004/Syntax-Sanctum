#include<iostream> // Includes the input-output stream library needed for cout and endl

using namespace std; // Allows us to use standard library objects like cout and endl without prefixing them with 'std::'

int main() // Entry point of the program; execution starts here
{
    cout << "Hello World" << endl; // Prints "Hello World" to the console and then moves the cursor to a new line using endl

    cout << "Hello Tokyo"<<endl; // Prints "Hello Tokyo" on the next line (because of the previous endl)
    
    //Predict the output
    cout<<"nn\n\nnnn\n";
    cout<<"nn/n/nnn/n";
    
    return 0; // Returns 0 to the operating system, indicating that the program ended successfully
}
