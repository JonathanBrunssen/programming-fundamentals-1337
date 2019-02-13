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

      for (int bar = 1; bar<= 2*foo-1; bar++)
      {
        cout<<"*";
      }

      cout<<"\n";
    }

    space = 1;
    //create the bottom half of the diamond
    for (int foo = 1; foo<= n - 1; foo++)
    {
      for (int bar = 1; bar<= space; bar++)
      {
        cout<<" ";
      }

      space++;

      for (int bar = 1 ; bar<= 2*(n-foo)-1; bar++)
      {
        cout<<"*";
      }

      cout<<"\n";
    }
    cout <<"I am done drawing your diamond!\n";
    goto start;
  }
  else if(n == 0){
  	cout << "Thank you for using the app! Good-bye!";
    return 0;
  }
  else{
    cout << "There was an error... try again.\n";
    goto error;
  }
  return 0;
}

/*
Enter number of rows(or 0 to quit): 7
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
I am done drawing your diamond!
Enter number of rows(or 0 to quit): 5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
I am done drawing your diamond!
Enter number of rows(or 0 to quit): 20
                   *
                  ***
                 *****
                *******
               *********
              ***********
             *************
            ***************
           *****************
          *******************
         *********************
        ***********************
       *************************
      ***************************
     *****************************
    *******************************
   *********************************
  ***********************************
 *************************************
***************************************
 *************************************
  ***********************************
   *********************************
    *******************************
     *****************************
      ***************************
       *************************
        ***********************
         *********************
          *******************
           *****************
            ***************
             *************
              ***********
               *********
                *******
                 *****
                  ***
                   *
I am done drawing your diamond!
Enter number of rows(or 0 to quit): 0
Thank you for using the app! Good-bye!
*/
