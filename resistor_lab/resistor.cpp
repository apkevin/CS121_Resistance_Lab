#include <iostream>
#include <limits>
using namespace std;
char input;

int main() {
// Initializing variables.
double resistance_1;
double resistance_2;

cout << "Welcome to the Resistor Calculation Program!\n\n";

// Receiving input from user and storing input into variables.

cout << "Please enter a resistance: ";
cin >> resistance_1;
while (cin.fail()) {

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cerr << "\nPlease enter just numbers!\n\n";
    
    cin >> resistance_1;

}


cout << "Please enter a 2nd resistance: ";
cin >> resistance_2;
while (cin.fail()) {

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cerr << "\nPlease enter just numbers!\n\n";
    
    cin >> resistance_2;
}



cout << "\nThank You! You've entered " << resistance_1 << "ohms and " << resistance_2 << "ohms.\n\n"
<< "Calculating ... \n\n" << "Done\n\n";

// assigning series and parallel calculations. 
double series = resistance_1 + resistance_2;
double parallel = 1 / (1 / resistance_1 + 1 / resistance_2);

// Displahying results back to user.
cout << "If your resistors are placed in series, they'll total to " << series << " ohms.\n\n";
cout << "If they are placed in parallel, they'll total " << parallel << " ohms.\n\n";
cout << "Thank You for using the RCP!!\n\n" << "Endeavor to have a blossoming day\n";
}