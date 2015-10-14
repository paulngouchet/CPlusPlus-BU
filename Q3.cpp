


#include <iostream>
using namespace std ;

int hammingDistance ( int hamming1 , int hamming2 ) // gives the hamming distance between two positive integers which are passed by values  when they are in hexdecimal 

{

  int remainder1 , remainder2 ;   
  int i = 0 ;

  while ( (hamming1 != 0 ) && ( hamming2 != 0) ) // it will keeps looping until hamming1 and hamming2 wiil be equal to zero .

    {
      remainder1 = hamming1 % 16 ; // the integer remainder1 stores the remainder of the actual value of the intger hamming1 passed by value in the function 
      remainder2 = hamming2 % 16 ; // the integer remainder2  stores the remainder of the actual value of the intger hamming2 passed by value in the function   

      if ( remainder1 != remainder2 ) // each time remainder1 is different that remainder2 it increments the integer i which is the count .
	i++ ;

      hamming1 = hamming1 /16 ; // hamming1 is divided by 16 and stored in hamming1 overwriting its old value 
      hamming2 = hamming2 /16 ; // hamming2 is divided by 16 and stored in hamming overwriting its old value

    }

  return i ; // returns the hamming distance 
    
    }

int main ()  // main function 

{

  cout << "Enter two positive integers : " << endl ; // asks the user to enters two positive integers 

  int number1 , number2 ;

  cin >> number1 ;  // the users adds to positives numbers 
  cin>> number2 ;


  cout << "Hamming distance between " << number1  << " and " << number2 << " when numbers are in hex format is: " << hammingDistance (number1 , number2 ) << endl ; // prints the hamming distance between the two positive integers when they are in hex by calling the function hammingDistance .
  return 0 ;

}

