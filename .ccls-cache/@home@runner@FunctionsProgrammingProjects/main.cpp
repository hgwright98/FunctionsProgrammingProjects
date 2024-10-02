// This program runs three functions in the main function and the first asks the user for 3 prices the price today, 1 year ago, and 2 years ago. After that a second function calculates the inflation rate and the third funciton checks to see if the inflation rate is increasing or decreasing and then outputs the inflation rate and whether it is increasing or decreasing.
#include <iostream>
#include <iomanip>

using namespace std;

// Function to get the prices from the user and checks if the prices are valid with a while statement
void getPrices(double &x, double &y, double &z) {
    cout << "Please enter the price of the item today: "; 
    cin >> x;
    while (x < 0){
        cout << "Price cannot be negative. Please enter a valid price: ";
        cin >> x;
    }
    
    cout << "Please enter the price of the item 1 year ago: "; 
    cin >> y;
    while (y < 0) {
        cout << "Price cannot be negative. Please enter a valid price: ";
        cin >> y;
    }

    cout << "Please enter the price of the item 2 years ago: "; 
    cin >> z;
    while (z < 0) {
        cout << "Price cannot be negative. Please enter a valid price: ";
        cin >> z;
    }
}

// This functions calulates the inflation rates and then stores them in the main funciton variables
void calculateInflationRates(double v, double w, double x, double &y, double &z) {
    y = (v - w) / w;
    z = (w - x) / x;
}

// This function checks to see if the inflation rates are increasing or decreasing and then outputs the inflation rates and whether the inflation rates are increasing or decreasing and the rates themselves
void displayResults(double y, double z) {
    cout << fixed << setprecision(2);
    cout << "The inflation rate for the first year is: " << y * 100 << "%" << endl;
    cout << "The inflation rate for the second year is: " << z * 100 << "%" << endl;

    if (y > z)
        cout << "The inflation rate is decreasing." << endl;
    else if (y < z)
        cout << "The inflation rate is increasing." << endl;
    else
        cout << "The inflation rate is constant." << endl;
}
// The main function calls the three functions
int main() {
    // This is where the varaibles are initiatliazed so that I can use them in the functions
    double price1, price2, price3, inflationRate1, inflationRate2;

    // This gets the prices from the user
    getPrices(price1, price2, price3);

    // This calculates the inflation rates
    calculateInflationRates(price1, price2, price3, inflationRate1, inflationRate2);

    // This outputs the results
    displayResults(inflationRate1, inflationRate2);

    return 0;
}
