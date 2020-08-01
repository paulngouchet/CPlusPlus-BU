#include <iostream>
#include <cmath>
using namespace std ; 

double  perimeterTriangle ( double r1 , double r2 , double r3 )  // this function finds the perimeter of a triangle , the sides are entered as parameters .
	{
  		double result = r1 + r2 + r3 ;  
  		return result;
	}


double areaTriangle ( double n1 , double n2 , double n3 ) // this function finds the area of a triangle , the sides are entered as parameters .
	{
  	double p  = ( perimeterTriangle(n1 , n2 , n3 ))/2 ;    
  	double result = sqrt(p*(p-n1)*(p-n2)*(p-n3))   ;
  	return result ;
	}

int main ()  // Main function .
	{
		cout<< " Enter the dimensions of the triangle" << endl ;
    		double number1 , number2 , number3  ; 
    		cout<<"Side-1: "  ;  cin>>number1 ; // the user enters the 1st side of the triangle     
    		cout<<"Side-2: "  ;  cin>>number2 ; // the user enters the 2nd side of the triangle
    		cout<<"Side-3: "  ;  cin>>number3 ; 
   		double  a = number1 , b = number2 , c = number3 ;  // a , b and c store  a copy of the value of the sides of the triangle .
    		double sum1 = a + b , sum2 = a + c , sum3 = b + c ;  // sum1 = side1 + side2 ,  sum2 = side1 + side3 , sum3 = side2 + side3 .

    		if ( sum1 < c ||  sum2 < b ||  sum3 < a )    // if sum1 < side3 or sum2 < side2 or sum3 < side1 , it prints that the dimensions do not form a triangle .
			{
				cout<< "Dimensions "<< number1 << "," << number2 << "," << number3 << " do not form a triangle." << endl ;
      			}
   		 else
		 	{
 				 cout<< "This triangle's area is " << areaTriangle( a , b , c ) << " square-units and its perimeter is " << perimeterTriangle( a , b , c ) << " units." <<endl ;  // prints the area of the triangle and the perimeter after calling the functions perimeterTriangle and areaTriangle . 
 			}
	
   		 return 0 ;

	}
