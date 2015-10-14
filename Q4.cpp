#include <iostream>
using namespace std ;


char resultLetter ( int n1 , int number ) // function based on the number corresponding to the character entered it displays the character corresponding to the offset . 

{
  int i = 0 ;

  while ( i < number )

    {
      n1++ ;
      i++ ;

    }

  char finalthing= n1 ;   // finalthing stored the character correponding to the value of the final character after the offset has been applied tot the initial character . 
  return finalthing ; // returns the final character . 


}
int main ()

{

  char something ;

  int number ;

  cout << "Enter character: " ;   // asks the user to enter a  character
  cin >> something ; // the users adds a character 
  cout << "Offset ( enter 0 to convert case ): ";  // asks the user to enter the offset 
  cin >> number ;  // the users add a positive integers

  int n1 = something ;
  int n2 = 127 - n1 ;  // n2 stores the maximum offset that a character can have based on the limitation of the ASCII table which 127 characters 


  if ( number != 0 )  // if the offset entered by the user is different than 0 , it enters this if 

      {
	if ( number <= n2 ) // if the offset is between the range of the maximum allowable offset of that characters it calls the resultLetter function which the character matching the offset and displays it 
	  {
	cout << "New character: " << resultLetter(n1 , number ) ;
	  }

	else if ( number > n2 ) // else it prints out of range 
	  {
	  cout << "Error. Out of range. " ;
	  }
      }




  else if ( number == 0 )     // when the offset is 0 it prints the character in uppercase or lowercase if it is letter . if the character is not a letter it just displays the character again 

      {

	if ( n1 >= 0 && n1 <= 64 )
	  { 
	    cout << "New character: " << something ; // the character is not a letter  based on its value in the Ascii table , it just displays it .  
	  }

	  

	else if ( n1 >= 91 && n1 <= 96 ) // same thing happens here 
	  {
	    cout << "New character: " << something ;
	  }


	else if ( n1 >= 123 && n1<= 127 ) // same thing happens here 
	  {
	      cout << "New character: " << something ;
	  }

	else if ( n1 >= 65 && n1 <= 90 )// based on his value in the Ascii we know this character is an uppercase letter , it then displays the lowercase corresponding 

	  {

	    n1 = n1 + 32 ;

	    char letter = n1 ;

	    cout << "New character: " << letter ;

	  }


	else if ( n1 >= 97 && n1 <= 122 ) // based on his  value in the ascii we know this character is a lowercase letter , then it displays the uppercase corrensponding

	  {
	    n1 = n1 -32 ;

	    char letter = n1 ;

	    cout << "New character: " << letter ;

	  }
      }

    return 0 ;

}
