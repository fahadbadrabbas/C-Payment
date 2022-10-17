#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	string state, month ; // declaring the variables for input
	double amount;
	int date, year;

	cout << "State Name: ";
	getline(cin, state);
	cout << "Purchase amount: ";
	cin >> amount;
	cin.ignore(); 
	cout << "Provide the month: ";
	getline(cin, month);
	cout << "Provide the day: ";
	cin >> date;
	cout << "Provide the year: ";
	cin >> year;


	// total amount calculation according to state, starts

	double ans;

	if (state == "Alabama") {
		if (month == "July" && date >= 15 && date <= 17) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 4.00 / 100) + (amount * 5.14 / 100);
		}
	}
	else if (state == "Alaska") {
		ans = amount + (amount * 0.00 / 100) + (amount * 1.43 / 100);
	}
	else if (state == "Arizona") {
		ans = amount + (amount * 5.60 / 100) + (amount * 2.77 / 100);
	}
	else if (state == "Arkansas") {
		if (month == "August" && date >= 6 && date <= 7) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.50 / 100) + (amount * 2.93 / 100);
		}
	}
	else if (state == "California") {
		ans = amount + (amount * 7.25 / 100) + (amount * 1.31 / 100) + (amount * 1.00 / 100);
	}
	else if (state == "Colorado") {
		ans = amount + (amount * 2.90 / 100) + (amount * 4.73 / 100);
	}
	else if (state == "Connecticut") {
		if (month == "August" && date >= 21 && date <= 27) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.35 / 100) + (amount * 0.00 / 100);
		}
	}
	else if (state == "Delaware") {
		ans = amount;
	}
	else if (state == "Florida") {
		ans = amount + (amount * 6.00 / 100) + (amount * 1.05 / 100);
	}
	else if (state == "Georgia") {
		ans = amount + (amount * 4.00 / 100) + (amount * 3.29 / 100);
	}
	else if (state == "Hawaii") {
		ans = amount + (amount * 4.00 / 100) + (amount * 0.41 / 100);
	}
	else if (state == "Idaho") {
		ans = amount + (amount * 6.00 / 100) + (amount * 0.03 / 100);
	}
	else if (state == "Illinois") {
		ans = amount + (amount * 6.25 / 100) + (amount * 2.49 / 100);
	}
	else if (state == "Indiana") {
		ans = amount + (amount * 7.00 / 100) + (amount * 0.00 / 100);
	}
	else if (state == "Iowa") {
		if (month == "August" && date >= 5 && date <= 6) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.00 / 100) + (amount * 0.82 / 100);
		}
	}
	else if (state == "Kansas") {
		ans = amount + (amount * 6.50 / 100) + (amount * 2.17 / 100);
	}
	else if (state == "Kentucky") {
		ans = amount + (amount * 6.00 / 100) + (amount * 0.00 / 100);
	}
	else if (state == "Louisiana") {
		ans = amount + (amount * 4.45 / 100) + (amount * 5.00 / 100);
	}
	else if (state == "Maine") {
		ans = amount + (amount * 5.50 / 100) + (amount * 0.00 / 100);
	}
	else if (state == "Maryland") {
		if (month == "August" && date >= 14 && date <= 20) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.00 / 100) + (amount * 0.00 / 100);
		}
	}
	else if (state == "Massachusetts") {
		if (month == "August" && date >= 14 && date <= 15) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.25 / 100) + (amount * 0.00 / 100);
		}
	}
	else if (state == "Michigan") {
		ans = amount + (amount * 6.00 / 100) + (amount * 0.00 / 100);
	}
	else if (state == "Minnesota") {
		ans = amount + (amount * 6.88 / 100) + (amount * 0.55 / 100);
	}
	else if (state == "Mississippi") {
		if (month == "July" && date >= 29 && date <= 30) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 7.00 / 100) + (amount * 0.07 / 100);
		}
	}
	else if (state == "Missouri") {
		if (month == "April" && date >= 19 && date <= 25) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 4.23 / 100) + (amount * 3.90 / 100);
		}
	}
	else if (state == "Montana") {
		ans = amount;
	}
	else if (state == "Nebraska") {
		ans = amount + (amount * 5.50 / 100) + (amount * 1.35 / 100);
	}
	else if (state == "Nevada") {
		if (month == "August" && date >= 5 && date <= 7) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.85 / 100) + (amount * 1.29 / 100);
		}
	}
	else if (state == "New Hampshire") {
		ans = amount;
	}
	else if (state == "New Jersey") {
		ans = amount + (amount * 6.63 / 100) + (amount * -0.03 / 100);
	}
	else if (state == "New Mexico") {
		ans = amount + (amount * 5.13 / 100) + (amount * 2.69 / 100);
	}
	else if (state == "New York") {
		ans = amount + (amount * 4.00 / 100) + (amount * 4.49 / 100);
	}
	else if (state == "North Carolina") {
		ans = amount + (amount * 4.75 / 100) + (amount * 2.22 / 100);
	}
	else if (state == "North Dakota") {
		ans = amount + (amount * 5.00 / 100) + (amount * 1.85 / 100);
	}
	else if (state == "Ohio") {
		if (month == "August" && date >= 5 && date <= 7) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 5.75 / 100) + (amount * 1.42 / 100);
		}
	}
	else if (state == "Oklahoma") {
		if (month == "August" && date >= 6 && date <= 8) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 4.50 / 100) + (amount * 4.42 / 100);
		}
	}
	else if (state == "Oregon") {
		ans = amount;
	}
	else if (state == "Pennsylvania") {
		ans = amount + (amount * 6.00 / 100) + (amount * 0.34 / 100);
	}
	else if (state == "Rhode Island") {
		ans = amount + (amount * 7.00 / 100) + (amount * 0.00 / 100);
	}
	else if (state == "South Carolina") {
		if (month == "August" && date >= 5 && date <= 7) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.00 / 100) + (amount * 1.43 / 100);
		}
	}
	else if (state == "South Dakota") {
		ans = amount + (amount * 4.50 / 100) + (amount * 1.90 / 100);
	}
	else if (state == "Tennessee") {
		if (month == "July" && date >= 29 && date <= 31) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 7.00 / 100) + (amount * 2.47 / 100);
		}
	}
	else if (state == "Texas") {
		if (month == "August" && date >= 5 && date <= 7) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.25 / 100) + (amount * 1.94 / 100);
		}
	}
	else if (state == "Utah") {
		ans = amount + (amount * 5.95 / 100) + (amount * 0.99 / 100) + (amount * 1.25 / 100);
	}
	else if (state == "Vermont") {
		ans = amount + (amount * 6.00 / 100) + (amount * 0.18 / 100);
	}
	else if (state == "Virginia") {
		ans = amount + (amount * 5.30 / 100) + (amount * 0.35 / 100) + (amount * 1.00 / 1000);
	}
	else if (state == "Washington") {
		ans = amount + (amount * 6.50 / 100) + (amount * 2.67 / 100);
	}
	else if (state == "West Virginia") {
		if (month == "August" && date >= 5 && date <= 7) {  // checking if free tax dates
			ans = amount;
		} else {
			ans = amount + (amount * 6.00 / 100) + (amount * 0.39 / 100);
		}
	}
	else if (state == "Wisconsin") {
		ans = amount + (amount * 5.00 / 100) + (amount * 0.44 / 100);
	}
	else if (state == "Wyoming") {
		ans = amount + (amount * 4.00 / 100) + (amount * 1.36 / 100);
	}
	else {
		cout << "Invalid state!";
		return 0;
	}

	// calculation, according to the state, ends

	// data validation starts
	// we are starting data validation after calculation so that,
	// if the input state name is not present, we can handle it first.

	if (islower(state[0])) {
		cout << "Invalid state!";
		return 0;  				// this exits the program
	}

	if (amount <= 0) {
		cout << "Invalid amount!";
		return 0;
	}

	if (islower(month[0])) {
		cout << "Invalid month!";
		return 0;
	}

	if (month != "January" && month != "February" && month != "March" &&
			month != "April" && month != "May" && month != "June" &&
			month != "July" && month != "August" && month != "September" &&
			month != "October" && month != "November" && month != "December")
	{
		cout << "Invalid month!";
		return 0;
	}

	if (date < 1 || date > 31) {
		cout << "Invalid day!";
		return 0;
	}

	if (year < 1 || year > 2025) {
		cout << "Invalid year!";
		return 0;
	}

	// data validation finishes
	// ------------------------------------

	// printing the answer in correct format

	cout << std::fixed;
    	cout << std::setprecision(2);

	cout << "Please pay a total of $" << ans;
}
 