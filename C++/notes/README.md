# C++ Notes

| Date | What Was Covered |
|------|------------------|
|1/24/19|[Intro to C++](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#intro-to-c)|
|1/29/19|[Intro to C++ Continued](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#intro-to-c)|
|1/31/19|[Expressions and Interactivity](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#expressions-and-interactivity)|
|2/19/19|[Functions](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#functions)|
|2/26/19|[Functions cont.](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#functions)|
|2/26/19|[Test review](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#functions)|
|3/5/19|[Classes]()|
|3/26/19|[]()|

## Intro to C++
- [Code](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#code)
- [Notes](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#notes)
### Code
```cpp
#include <iostream>
using namespace std;
main()
{
  string name {}; //the {} makes it set to its default value which is ""
  cout << "What is your name? ";
  cin >> name;
  cout << "Hello " << name << ".";
  return 0; // return 0 stops the program
}
```
### Notes
  - "cin >>" is the character input for C++.
  - "cout<<" is the character output for C++.
  - "pow" is how you use the power method in C++.
  - pre processor [#define keyword value] where ever the program sees the keyword it replaces it with the value.

## Expressions and Interactivity
- [Code](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#code-1)
- [Notes](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#notes-1)
### Code
```cpp
#include <iostream>
#include <iomain>
using namespace std;
main()
{
  cout << "what is the"
          "cost of"
          "your food? ";
  double food_cost{};
  //double food_cost = 0;
  //double food_cost = 0.;
  //double food_cost = 0.0;
  //double food_cost {0d};
  //double food_cost {0.0D};
  //int food_cost {};
  cin >> food_cost;

  //cout << "Your food cost is: $" << food_cost << endl;
  cout << setprecission(2);
  cout << fixed;
  const double TAX_RATE = 0.0825;
  cout << "Your tax would be: $" << food_cost * TAX_RATE << endl;

  cout << "How many people will split the bill? ";
  int persons {0};
  cin >> persons;
  cout << "Per person cost is: $"<< ((food_cost*TAX_RATE)/persons) << endl;

  cout << "How much would you like to tip? ";
  double tip{}
  cin >> tip;
  cout << "Each person should tip: $" << tip/persons << endl;
  cout << "Each person should tip: $" << tip/(double)persons << endl;
  cout << "Each person should tip: $" << tip/static_cast<double>(persons) << endl;
  cout << "Good-bye!\n";
  return 0;
}
```
### Notes
  -

## Functions
- [Code](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#code-2)
- [Notes](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#notes-2)

### Code
```cpp
#include <iostream>
#include <iomain>
using namespace std;
/*variable NAME(arg){
this is the format of a cpp class
}*/
/*double avg(double a, double b = 0.0, double c){ //double b has a default of zero
  return  (a+b+c)/3;
}*/
void comparison(){
  cout << "Enter a water temp in Fahrenheit: ";
  double water_temp{};
  cin >> water_temp;
  if(water_temp <= 32){
    cout << "water is freezing.\n";
  }
  else if(water_temp >= 128){
    cout << "water is boiling.\n";
  }
  else(){
    cout << "water is liquid.\n";
  }
}
main(){
  cout << "Start...\n";
  while(true){
    cout << "enter option: c)omparison q)uit: ";
    char option{};
    cin >> option;
    option = tolower(option);
    if (option == "q")
      break;
    else if (option == "c")
      comparison();
    else
      cout << "Invalid option...\n";
  }
  cout << "the average of 10, 15, 20 is: " << avg(10,15,20) << endl;
  return 0;
}
```

### Notes
- Modular programming: breaking a program up into smaller, manageable functions of modules. It supports the divide-and-conquer approach to solving a problem.
- Function: a collection of statements to preform a specific task
- Motivation for modular programming
  - Simplifies the process of writing programs
  - Improves the maintainability of programs
- Function call: a statement that causes a function to execute
- Function definition: the statements that make up a function
- Default arguments are values that are passed automatically if arguments are missing from a function call
- Default arguments must be a constant or literal declared in the prototype header
- Multi-paramater functions may have default arguments for some or all parameters
- Reference variable is an alias for another variable
- Reference variable is defined wit an & in the prototype and in the header
  - void getDimenstions(int &,int &)
- Overloading functions function's with the same name
- exit() terminates the function
- exit() can be called from any function
- Requires cstdlib in header file

## Test Review
  - Phase 1
    - At home multiple choice
    - 40 questions
    - due midnight on the day of phase 2
  - Phase 2
    - In class multiple choice
    - 16 questions
    - Is password protected
    - Done during lab
  - Phase 3
    - In class lab
    - Done the class after phase 2 (if phase 2 is on Thursday phase 3 is on Tuesday)
    - Bring your laptop!

## Classes
  - [Code]()
  - [Notes]()

### Code

```cpp

```

### Notes
