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
using namespace std;

char input(string prompt_text, string error_msg = "Sorry, try again."){
	char l;
	do{
		cout << prompt_text;
		cin >> l; l = tolower(l);
		if(isdigit(l)){
			cout << error_msg << endl;
		}			
	}while(cin && isdigit(l));
	return l;
}

double input(double min_number = -100, int max_number = 100, string prompt_text = "Enter first number: ", string error_msg = "number not in range."){
	double n1;			
	do{//get number
		cout << prompt_text;
		cin >> n1;
		if(n1 < min_number || n1 > max_number){
			cout << error_msg << endl;
		}
	}while(cin && typeid(n1) != typeid(double) && n1 < min_number || n1 > max_number);
}

void input(double x, double y, string prompt_text = "enter first point (x): "){
}

int dist(char a, char b){//return the distance between two letters

//display(,,a,b)
}

double dist(double d1, double d2){//return the distance between 2 numbers

//display(,,d1,d2)
}

double dist(double x1, double y1, double x2, double y2){//return the distance between 2 points

//display(,,x1,y1,x2,y2)
}

void display(const string &msg, char ch1, char ch2){
	
}

void display(const string &msg, double d1, double d2){
	
}

void display(const string &msg, double x1, double y1, double x2, double y2){
	
}

int main(){
	double result;
	cout << "Display the distance between two items: letters, numbers, or points.\n" << endl;
	
	while(true){
		cout << "Options: l)etter; n)umber; p)oint; q)uit: ";
		char option{}; cin >> option; option = tolower(option);
		switch(option){
			case 'l':
				char l1;
				char l2;
				int total_dis;
				l1 = input("Enter first letter (a-z): ");
				l2 = input("Enter next letter (a-z): ");	
				total_dis = dist(l1,l2);		
				break;
				
			case 'n':
				double n1;
				double n2;
				n1 = input();
				n2 = input(-100,100,"Enter second number(-100,100): ");
				result = dist(n1,n2);
				break;
				
			case 'p':
				double x1;
				double y1;
				double x2;
				double y2;
				result = dist(x1,y1,x2,y2);
				break;
				
			case 'q':
				return false;
				break;
		}
	}
	return 0;
}
