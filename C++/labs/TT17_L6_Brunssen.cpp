/*
Author: Jonathan Brunssen
Course: COSC 1337
Spring 2019 TT17
Instructor: Thayer
Lab: 6
Purpose: Display the distance between two items: letters, numbers, or points.
*/
#include <iostream>
#include <typeinfo>
#include <cmath>
using namespace std;

char input(string prompt_text, string error_msg){
	char l;
	do{
		cout << prompt_text;
		cin >> l;
		l = tolower(l);
		if(isdigit(l)){
			cout << error_msg << endl;
		}			
	}while(cin && isdigit(l));
	return l;
}

double input(double min_number = -100, int max_number = 100, string prompt_text = "Enter first number (-100,100): ", string error_msg = "number not in range."){
	double n1;		
	do{//get number
		cout << prompt_text;
		cin >> n1;
		if(n1 < min_number || n1 > max_number){
			cout << error_msg << endl;
		}
		else{
			return n1;
		}
	}while(cin  && ((n1 < min_number) || (n1 > max_number)) );
}

void input(double &x, double &y, string prompt_text = "enter first point (x): "){
	do{
	cout << prompt_text;
	cin >> x;
	if(typeid(x) != typeid(double))
		cout << "Not a number, try again." << endl;
	}while(typeid(x) != typeid(double));
	
	prompt_text = "enter second point (y): ";
	do{
	cout << prompt_text;
	cin >> y;
	if(typeid(y) != typeid(double))
		cout << "Not a number, try again." << endl;
	}while(typeid(y) != typeid(double));
	
	
}

int dist(char a, char b){//return the distance between two letters
int r;
r = int(a) - int(b);
if(r <0)
	r *= -1;
return r;
}

double dist(double d1, double d2){//return the distance between 2 numbers
double r;
r = d1 - d2;
if(r <0){
	r *=-1;
}
return r;
}

double dist(double x1, double y1, double x2, double y2){//return the distance between 2 points
double r;
r = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
return r;
}

void display(const string &msg, char ch1, char ch2){
	static int callcount;
	callcount++;
	int result = dist(ch1, ch2);
	cout << "(#" << callcount << ") " << msg << ch1 << " & " << ch2 << " = " << result << endl;
	cout << endl;
}

void display(const string &msg, double d1, double d2){
	static int callcount;
	callcount++;
	double result = dist(d1,d2);
	cout << "(#" << callcount << ")"  << msg << d1 << " & " << d2 << " = " << result << endl;
	cout << endl;
}

void display(const string &msg, double x1, double y1, double x2, double y2){
	static int callcount;
	callcount++;
	double result = dist(x1,y1,x2,y2);
	cout << "(#" << callcount << ") " << msg << "(" << x1 << "," << y1 << ")" << " & " << "(" << x2 << "," << y2 << ")" << " = " << result <<endl;
	cout << endl;
}

int main(){
	double result;
	string msg;
	cout << "Display the distance between two items: letters, numbers, or points.\n" << endl;
	
	while(true){
		cout << "Options: l)etter; n)umber; p)oint; q)uit: ";
		char option{};
		cin >> option;
		option = tolower(option);
		switch(option){
			case 'l':
				char l1;
				char l2;
				l1 = input("Enter first letter (a-z): ", "Sorry not a letter, try again.");
				l2 = input("Enter next letter (a-z): ", "Sorry not a letter, try again.");
				msg = "The distance between characters ";
				display(msg,l1,l2);
				break;
				
			case 'n':
				double n1;
				double n2;
				n1 = input();
				n2 = input(-100,100,"Enter second number(-100,100): ");
				msg = "The distance between ";
				display(msg, n1, n2);
				break;
				
			case 'p':
				double x1;
				double y1;
				double x2;
				double y2;
				input(x1,y1);
				input(x2,y2);
				display(msg, x1,y1,x2,y2);
				break;
				
			case 'q':
				return false;
				break;
		}
	}
	cout << "Good-bye!" << endl;
	return 0;
}
/*Display the distance between two items: letters, numbers, or points.

Options: l)etter; n)umber; p)oint; q)uit: l
Enter first letter (a-z): b
Enter next letter (a-z): f
(#1) The distance between characters b & f = 4

Options: l)etter; n)umber; p)oint; q)uit: n
Enter first number (-100,100): -5.5
Enter second number(-100,100): 20.5
(#1)The distance between -5.5 & 20.5 = 26

Options: l)etter; n)umber; p)oint; q)uit: p
enter first point (x): 0
enter second point (y): 3
enter first point (x): 4
enter second point (y): 0
(#1) The distance between (0,3) & (4,0) = 5

Options: l)etter; n)umber; p)oint; q)uit: l
Enter first letter (a-z): 8
Sorry not a letter, try again.
Enter first letter (a-z): A
Enter next letter (a-z): z
(#2) The distance between characters a & z = 25

Options: l)etter; n)umber; p)oint; q)uit: n
Enter first number (-100,100): -123.456
number not in range.
Enter first number (-100,100): -10
Enter second number(-100,100): 5
(#2)The distance between -10 & 5 = 15

Options: l)etter; n)umber; p)oint; q)uit: p
enter first point (x): 0
enter second point (y): 0
enter first point (x): 1
enter second point (y): 1
(#2) The distance between (0,0) & (1,1) = 1.41421

Options: l)etter; n)umber; p)oint; q)uit: q
Good-bye!

--------------------------------
Process exited after 85.14 seconds with return value 0
Press any key to continue . . .
*/
