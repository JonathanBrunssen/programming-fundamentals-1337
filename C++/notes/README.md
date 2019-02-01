# C++ Notes

| Date | What Was Covered |
|------|------------------|
|1/24/19|[Intro to C++](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#intro-to-c)|
|1/29/19|[Intro to C++ Continued](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#intro-to-c)|
|1/31/19|[Expressions and Interactivity](https://github.com/JonathanBrunssen/programming-fundamentals-1337/tree/master/C%2B%2B/notes#expressions-and-interactivity)|

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
