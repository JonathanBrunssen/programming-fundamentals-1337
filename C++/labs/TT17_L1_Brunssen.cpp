/*
Author: Jonathan Brunssen
Course: COSC 1337
Spring 2019 TT17
Instructor: Thayer
Lab: 1
Purpose: Calculate a reasturaunt bill and calculate your BMI
*/
#include <iostream>
#include <iomanip>
using namespace std;
main()
{	
	cout << "Hello welcome to the Reasturaunt Bill/ Body Mass Index Calculator!\n";
	while( true)
	{
		cout << "If you would like to calculate your reasturaunt bill enter 'a'.\n"
				"If you would like to calculate your BMI enter 'b'.\n"
				"If you would like to quit enter 'q'.\n"
				"Please enter your option: ";
		char option;
		cin >> option;
		cout << "\n";
		if(option == 'a' || option == 'A')// calculate bill
		{
			cout << "Welcome to the Bill Calculator!\n";
			const double TAX_RATE = 0.0825;
			// get the food cost and the tip
			cout << "What was the cost of your food: $";
			double food_cost{};
			cin >> food_cost;
			cout << "What is the percentage you would like to tip: ";
			double tip{};
			cin >> tip;
			cout << "I am calculating your Bill!\n";
			cout << setprecision(2);
  			cout << fixed;
  			cout << "With a Food Cost of: $" << food_cost << "\n" 
  					"Your Tax is: $" << (food_cost * TAX_RATE) << "\n"
  					"Your Tip is: $" << (tip/100) * food_cost << "\n"
  					"Which makes your Total: $" << food_cost + (food_cost * TAX_RATE) + ((tip/100) * food_cost) << endl;
		}
		else if(option == 'b' || option == 'B')// calculate bmi
		{
			cout << "Welcome to the BMI Calculator\n";
			cout << "Please enter the amount of feet in your height: ";
			int feet{};
			cin >> feet;
			cout << "Please enter the amount of inches in your height: ";
			int inches{};
			cin >> inches;
			cout << "Your height is: "<< feet << " feet " << inches << " inches\n"
					"Is this correct?(y/n) ";
			string answer;
			cin >> answer;
			while(answer != "")
			{
				if(answer == "y" || answer == "Y")
				{
					cout << "How much do you weigh in pounds? ";
					int weight{};
					cin >> weight;
					cout << "I am calculating your BMI now!\n";
					double total_height = (feet * 12) + inches;
					double bmi = (weight/(total_height * total_height)) * 703;
					cout << setprecision(2);
  					cout << fixed;
					cout << "Your BMI is: " << bmi << "\n";
					break;
				}
				else if(answer == "n" || answer == "N")
				{
					cout << "Please enter the amount of feet in your height: ";
					cin >> feet;
					cout << "Please enter the amount of inches in your height: ";
					cin >> inches;
					cout << "Your height is: "<< feet << " feet " << inches << " inches\n"
							"Is this correct?(y/n) ";
					cin >> answer;
				}
				else
				{
					cout << "There was an error.\n"
							"Your height is: "<< feet << " feet " << inches << " inches\n"
							"Is this correct?(y/n) ";
					cin >> answer;
				}
			}
		}
		else if(option == 'q' || option == 'Q')
		{
			break;
		}
		else // check for error
		{
			cout << "There was an error. You entered: " << option << ".\n";
		}
		cout << "\n";
	}
	cout << "Good-bye!";
	return 0;
	
}
/*
Test Results

Hello welcome to the Reasturaunt Bill/ Body Mass Index Calculator!

If you would like to calculate your reasturaunt bill enter 'a'.
If you would like to calculate your BMI enter 'b'.
If you would like to quit enter 'q'.
Please enter your option: a

Welcome to the Bill Calculator!
What was the cost of your food: $30
What is the percentage you would like to tip: 16
I am calculating your Bill!
With a Food Cost of: $30.00
Your Tax is: $2.48
Your Tip is: $4.80
Which makes your Total: $37.27

If you would like to calculate your reasturaunt bill enter 'a'.
If you would like to calculate your BMI enter 'b'.
If you would like to quit enter 'q'.
Please enter your option: b

Welcome to the BMI Calculator
Please enter the amount of feet in your height: 6
Please enter the amount of inches in your height: 1
Your height is: 6 feet 1 inches
Is this correct?(y/n) y
How much do you weigh in pounds? 185
I am calculating your BMI now!
Your BMI is: 24.41

If you would like to calculate your reasturaunt bill enter 'a'.
If you would like to calculate your BMI enter 'b'.
If you would like to quit enter 'q'.
Please enter your option: w

There was an error. You entered: w.

If you would like to calculate your reasturaunt bill enter 'a'.
If you would like to calculate your BMI enter 'b'.
If you would like to quit enter 'q'.
Please enter your option: q

Good-bye!

*/
