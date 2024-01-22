#include <iostream>
#include <string>
using namespace std;

int main() {
    string q;

    cout << "Welcome to Huk's car rental. Which car do you want to rent?\n";
    cout << "We have the Toyota Corolla, a Dacia Logan, and an Opel.\n";

    // Get user input for car choice
    getline(cin, q);

    if (q == "I want a Toyota Corolla") {
        cout << "This car costs $10,050. Are you sure you want to rent this car? If yes, press 'y'; otherwise, press 'n'.\n";
    } else if (q == "I want a Dacia Logan") {
        cout << "This car costs $5,005. Are you sure you want to rent this car? If yes, press 'y'; otherwise, press 'n'.\n";
    } else if (q == "I want an Opel") {
        cout << "This car costs $5,045. Are you sure you want to rent this car? If yes, press 'y'; otherwise, press 'n'.\n";
    } else {
        cout << "Invalid answer, please give a correct answer.\n";
        return 1; // Exit the program because of an invalid choice
    }

    string r;
    getline(cin, r);

    if (r == "y") {
        cout << "You have successfully rented this car. Enjoy!\n";
    } else if (r == "n") {
        cout << "You have successfully canceled your car rent.\n";
    } else {
        cout << "Invalid answer. Please give a correct answer.\n";
    }

    return 0;
}
