/*
Author: Jonathan Brunssen
Course: COSC 1337
Spring 2019 TT17
Instructor: Thayer
Lab: 4
Purpose: calculate how fast sound moves in gas
*/
#include <iostream>
using namespace std;
enum material{ air = 'a', water = 'w', steel = 's', quit = 'q'};
double air_travel(int time = 0){
	const int speed = 1100;
	double dis = time * speed;
	return dis;
}

double water_travel(int time = 0){
	const int speed = 4900;
	double dis = time * speed;
	return dis;
}

double steel_travel(int time = 0){
	const int speed = 16400;
	double dis = time * speed;
	return dis;
}


main(){
	cout << "Welcome to the speed of sound in gasses calulator!\n";
	while(true){
		cout << "please pick a option a)ir, w)ater, s)teel q)uit: ";
		char option {};
		cin >> option; option = tolower(option);
		switch(option){
			int t;
			case air:
				do{
					cout <<"please enter the amount of time you want sound to travel (time cannot be less than 0): ";
					cin >> t;
				}while(cin && t < 0);
				cout << "The distance sound traveled " << t<< " seconds in air is: " << air_travel(t) << " Meters.\n";
				break;
			
			case water:
				do{
					cout <<"please enter the amount of time you want sound to travel (time cannot be less than 0): ";
					cin >> t;
				}while(cin && t < 0);
				cout << "The distance sound traveled " << t<< " seconds in water is: " << air_travel(t) << " Meters.\n";
				break;
			
			case steel:
				do{
					cout <<"please enter the amount of time you want sound to travel (time cannot be less than 0): ";
					cin >> t;
				}while(cin && t < 0);
				cout << "The distance sound traveled " << t<< " seconds in steel is: " << air_travel(t) << " Meters.\n";
				break;
				
			case quit:
				return false;
				break;
		}
	}
	return 0;
}
/*Welcome to the speed of sound in gasses calulator!
please pick a option a)ir, w)ater, s)teel q)uit: a
please enter the amount of time you want sound to travel (time cannot be less than 0): 10
The distance sound traveled 10 seconds in air is: 11000 Meters.
please pick a option a)ir, w)ater, s)teel q)uit: w
please enter the amount of time you want sound to travel (time cannot be less than 0): 10
The distance sound traveled 10 seconds in water is: 11000 Meters.
please pick a option a)ir, w)ater, s)teel q)uit: s
please enter the amount of time you want sound to travel (time cannot be less than 0): 10
The distance sound traveled 10 seconds in steel is: 11000 Meters.
please pick a option a)ir, w)ater, s)teel q)uit: a
please enter the amount of time you want sound to travel (time cannot be less than 0): -500
please enter the amount of time you want sound to travel (time cannot be less than 0): -200
please enter the amount of time you want sound to travel (time cannot be less than 0): -1
please enter the amount of time you want sound to travel (time cannot be less than 0): 1
The distance sound traveled 1 seconds in air is: 1100 Meters.
please pick a option a)ir, w)ater, s)teel q)uit: q

--------------------------------
Process exited after 64.33 seconds with return value 0
Press any key to continue . . .*/
