/*
Author: Jonathan Brunssen
Course: COSC 1337
Spring 2019 TT17
Instructor: Thayer
Lab: 3
Purpose: Write code for a 3rd Grade math tutor program that provides simple addition questions.
*/
#include <iostream>
#include <cstdlib>
#include <typeinfo>
using namespace std;
main()
{
	//create variables for program
	int num_of_questions{};//make a variable for the number of questions
	bool is_running{true};
	const char options [4] = {'a','s','m','d'};
	char option{};
	
	//show the user we are running
	cout << "Hello and welcome to the basic math tutor program!\n";
	cout << "How many practice problems would you like to do: ";
	cin >> num_of_questions;
	
	//enter the loop
	while(is_running && num_of_questions > 0)
	{
		bool question_picked{false};
		while(!question_picked)
		{
			int num1{(rand()%101)};//get a number between 0-100
			int num2{(rand()%101)};//get a number between 0-100
			int comp_pick = rand()%4;
			option = options[comp_pick];
			cout << option << endl;
			//test if the option is a good option;
			switch(option)
			{
				case 'a':
					if(num1 + num2 <= 100)
						question_picked = true;
					break;
				case 's':
					if(num1 - num2 >= 0)
						question_picked = true;
					break;
				case 'm':
					if(num1 * num2 <= 0)
						question_picked = true;
					break;
				case 'd':
					if(typeid(num1/num2) == typeid(int()))
						question_picked = true;
					break;
			}
			
		}
		cout << option <<endl;
		switch(option)
		{
			case'a':
				break;
			case's':
				break;
			case'm':
				break;
			case'd':
				break;
		}
		--num_of_questions;
		cout << num_of_questions << endl;
	}
	
	//tell the user the program is over
	cout << "Thank you for using the basic math tutor program!\n";
}
