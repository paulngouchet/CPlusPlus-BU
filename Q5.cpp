#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;


int main()

{
  srand(time(NULL)) ;
  int guess = rand() % 200 ; // the computer assign a random number between 0 and 200 to the integer variable guess 

  int choice1 , choice2 ; 

  cout<< "Enter your first guess: " ; // Asks the user to enter his first guess 
  cin>> choice1 ; // the users enters his first guess

  if ( choice1 == guess ) // if first guess equal the random number it prints a message with the random number in it 
    {
      cout<< "Correct!  The number was " << guess << "!" << endl ;
    }


  while (choice1 != guess )  // enter a loop if first guess doesn't match the random numbe , it exists the loop only when next guess matches the random number . 

    {

      cout<< "Enter your next guess: " ; // asks the user to enters his next guess
      cin>> choice2 ;  // the user enters his guess 

  int gap1 = abs( choice1 - guess );   // gap1 is the absolute value of the actual value of choice1 - the random number  

  int gap2  = abs( choice2 - guess ) ; // gap2 is the absolute value of the actual value of choice2 - the random number 
  if ( gap2 > gap1  )  // if gap2 > gap1 it prints colder ( farther ) 
    cout<< "colder"<< endl ;

  if ( gap2 < gap1 ) // if gap2 < gap1 it prints warmer ( closer )
    cout<< "warmer" << endl ;

  if ( gap2 == gap1 )  // if gap2 = gap1 it prints no change 
      cout<< "No change " << endl ;

  if ( choice2 == guess )// if finally choice2 = the random it prints correct number and the random number and breaks the loop .

    {

      cout << "Correct! The number was " << guess << "!" << endl ;
      break ;

    }
  choice1 = choice2 ; // actual value of choice1 is updated to the value of choice2

 

    }

}

    

