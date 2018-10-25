//Jessica Payne
// PLEASE PUT YOUR NAME HERE AND IN THE FILE NAME BEFORE YOU SAVE AND SUBMIT!!
//This program uses Functions and a switch statement to determine a NUMERIC choice
// the item selected from a menu. Gaddis MODIFIED BY SLANCASTER
//Pr4-27SwitchwithNOFunctions.cpp
#include <iostream>
#include <iomanip>
using namespace std;

//PLACE YOUR FUNCTION PROTOTYPES HERE
void getChoice(int&choice);
double totalCharges(int months, double rate);
void printTotal(double&charges);


int main()
{
	int choice = 0;       // To hold a menu choice
	int months = 0;       // To hold the number of months
	double charges = 0.0;   // To hold the monthly charges

							// Constants for membership rates
	const double ADULT = 40.0, SENIOR = 30.0, CHILD = 20.0;

	// Constants for menu choices
	const int ADULT_CHOICE = 1, CHILD_CHOICE = 2,
		SENIOR_CHOICE = 3, QUIT_CHOICE = 4;
	do
	{
		getChoice(choice);

		// Set the numeric ouput formatting.
		cout << fixed << showpoint << setprecision(2);

		// Respond to the user's menu selection.
		switch (choice)
		{
		case ADULT_CHOICE:
			 charges = totalCharges(months, ADULT);
			 printTotal(charges);
			break;

		case CHILD_CHOICE:
			charges = totalCharges(months, CHILD);
			printTotal(charges);

			break;

		case SENIOR_CHOICE:
			charges = totalCharges(months, SENIOR);
			printTotal(charges);

			break;

		case QUIT_CHOICE:
			cout << "Program ending.\n";
			break;

		default:
			cout << "The valid choices are 1 through 4. Run the\n"
				<< "program again and select one of those.\n";
		}
	} while (choice != QUIT_CHOICE);
	return 0;
}//end main()

void getChoice(int&choice)
{
	cout << endl << "\t\tHealth Club Membership Menu\n\n"
		<< "1. Standard Adult Membership\n"
		<< "2. Child Membership\n"
		<< "3. Senior Citizen Membership\n"
		<< "4. Quit the Program\n\n"
		<< "Enter your choice: ";
	cin >> choice;
}

double totalCharges(int months, double rate)
{
	cout << "Enter the months of membership. ";
	cin >> months;
	while (months <= 0)
	{
		cout << "Months of membership cannot be zero or negative. Enter Months again: ";
		cin >> months;
	}
	return  months * rate;
}

void printTotal(double&charges)
{
	cout << "The total charges are $" << charges << endl;
}