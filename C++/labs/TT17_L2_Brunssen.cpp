/*
Author: Jonathan Brunssen
Course: COSC 1337
Spring 2019 TT17
Instructor: Thayer
Lab: 2
Purpose: make a diamond out of stars
*/
#include <iostream>
using namespace std;
main()
{
  int n;
  int space = 1;
  error:
  start:
  cout<<"Enter number of rows(or 0 to quit): ";
  cin>>n;
  space = n - 1;
  if(n > 0)
  {
    //create the top half of the diamond
    for (int foo = 1; foo<=n; foo++)
    {
      for (int bar = 1; bar<=space; bar++)
      {
        cout<<" ";
      }

      space--;

      for (int bar = 1; bar<= 2*k-1; bar++)
      {
        cout<<"*";
      }

      cout<<"\n";
    }

    space = 1;
    //create the bottom half of the diamond
    for (foo = 1; foo<= n - 1; foo++)
    {
      for (bar = 1; bar<= space; bar++)
      {
        cout<<" ";
      }

      space++;

      for (bar = 1 ; bar<= 2*(n-k)-1; bar++)
      {
        cout<<"*";
      }

      cout<<"\n";
    }
    cout <<"I am done drawing your diamond!"
    goto start;
  }
  else if(n == 0){
    break;
  }
  else{
    cout << "There was an error... try again.\n";
    goto error;
  }
  return 0;
}
