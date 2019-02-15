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
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	//create variables for program
	int num_of_questions{};//make a variable for the number of questions
	double total_num_of_questions {};
	int answer{};
	int user_answer{};
	double num_correct{};
	int num1{};
	int num2{};
	double result{};
	
	const char options [4] = {'a','s','m','d'};
	char option{};
	
	//show the user we are running
	cout << "Hello and welcome to the basic math tutor program!\n";
	cout << "How many practice problems would you like to do: ";
	cin >> num_of_questions;
	total_num_of_questions = num_of_questions;
	
	//enter the loop
	while(num_of_questions > 0 && user_answer >= 0)
	{
		bool question_picked{false};
		while(!question_picked)
		{
			num1 = (rand()%101);//get a number between 0-100
			num2 = (rand()%101);//get a number between 0-100
			int comp_pick = rand()%4;
			option = options[comp_pick];
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
		
		switch(option)//create the problem
		{
			case'a':
				answer = num1 + num2;
				cout << "what is " << num1 << " + " << num2 << "?(or enter a negative number to quit) ";
				cin >> user_answer;
				if(user_answer == answer)
				{
					++num_correct;
					cout << "That was correct!\n";
				}
				else
				{
					cout << "Sorry that is not correct. " << num1 + num2 << " is the correct answer.\n";
				}
				break;
			case's':
				answer = num1 - num2;
				cout << "what is " << num1 << " - " << num2 << "?(or enter a negative number to quit) ";
				cin >> user_answer;
				if(user_answer == answer)
				{
					++num_correct;
					cout << "That was correct!\n";
				}
				else
				{
					cout << "Sorry that is not correct. " << num1 - num2 << " is the correct answer.\n";
				}
				break;
			case'm':
				answer = num1 * num2;
				cout << "what is " << num1 << " * " << num2 << "?(or enter a negative number to quit) ";
				cin >> user_answer;
				if(user_answer == answer)
				{
					++num_correct;
					cout << "That was correct!\n";
				}
				else
				{
					cout << "Sorry that is not correct. " << num1 * num2 << " is the correct answer.\n";
				}
				break;
			case'd':
				answer = num1 / num2;
				cout << "what is " << num1 << " / " << num2 << "?(or enter a negative number to quit) ";
				cin >> user_answer;
				if(user_answer == answer)
				{
					++num_correct;
					cout << "That was correct!\n";
				}
				else
				{
					cout << "Sorry that is not correct. " << num1 / num2 << " is the correct answer.\n";
				}
				break;
		}
		--num_of_questions;
	}
	result = (num_correct/total_num_of_questions)*100;
	cout << "You got " << num_correct << " correct out of " << total_num_of_questions << " questions that is a " << result << "%\n";
	cout << "Thank you for using the basic math tutor program!\n";
	return 0;
}
/*
Hello and welcome to the basic math tutor program!
How many practice problems would you like to do: 10
what is 62 - 6?(or enter a negative number to quit) 56
That was correct!
what is 100 - 60?(or enter a negative number to quit) 40
That was correct!
what is 89 - 30?(or enter a negative number to quit) 59
That was correct!
what is 60 - 33?(or enter a negative number to quit) 27
That was correct!
what is 18 + 30?(or enter a negative number to quit) 48
That was correct!
what is 82 - 80?(or enter a negative number to quit) 2
That was correct!
what is 98 - 40?(or enter a negative number to quit) 58
That was correct!
what is 40 + 3?(or enter a negative number to quit) 43
That was correct!
what is 27 + 65?(or enter a negative number to quit) -1
Sorry that is not correct. 92 is the correct answer.
You got 8 correct out of 10 questions that is a 80%
Thank you for using the basic math tutor program!
*/
