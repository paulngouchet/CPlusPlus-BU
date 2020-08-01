#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ; 

double celsiusToF ( double temp )  // function converts celsius to farenheit 
	{
  		double fahrenheit = ( temp )*1.8 + 32 ;
  		return fahrenheit ;
	}


double celsiusToK ( double temp ) // function converts celsius to kelvin
	{
  		double kelvin = temp + 273.15 ;
  		return kelvin ;

	}


double fahrenheitToC ( double temp ) // function converts fahrenheit to celsius 
	{
  		double celsius = ( temp - 32 )/1.8 ;
  		return celsius ;
	}


double fahrenheitToK ( double temp ) // function converts fahrenheit to Kelvin
	{
  		double kelvin = ( ( temp + 459.67)*5 )/9 ;
  		return kelvin ;
	}


double kelvinToC ( double temp ) // function converts kelvin to celsius 
	{
  		double celsius = temp - 273.15 ;
  		return celsius ;
	}

double kelvinToF ( double temp ) // function converts kelvin to fahrenheit 
	{
  		double fahrenheit = ( temp * 9 / 5 ) - 459.67 ;
  		return fahrenheit ;
	}

int main ()  // main function 
	{
  		int choice  ; 
  		cout<< "Celsius to Fahrenheit (enter 0) "<< endl ;   // all those Cout displays the different choices of conversion to the user .
  		cout<< "Celsius to kelvin (enter 1) "<< endl ;
  		cout<< "Fahrenheit to Celsius (enter 2) "<< endl ;
  		cout<< "Fahrenheit to Kelvin (enter 3) " << endl ;
  		cout<< "Kelvin to Celsius (enter 4) " << endl ; 
  		cout<< "Kelvin to Farhenheit (enter 5) "<< endl ;
  		cout<< "Conversion type: " ; 

  		while(true)  // loops that keeps asking the user to input an integer between 0 to 5 in order to choose the conversion until it does . it checks for integers different than 0 to 5 , and for other types of input that don't satisfy the critera of Cin . 
    			{
      				cin>>choice ;  
      				if (cin.fail())
					{
	  					cout<< " Wrong input , try again: " ;
	  					cin.clear();
	  					cin.ignore(10000000,'\n');
					}
     				else  if(choice != 0 && choice !=1 && choice !=2 && choice !=3 && choice !=4 && choice!=5)
					{
	  					cout<< "Wrong input, try again: " ;
					}                                                              
      				else  if ( choice == 0 ) // calls CelsiusToF function in order to convert the temperature Fahrenheit and displays the result .
      					{
						double temperature ;
						cout<<"Enter the amount in Celsius: " ; cin>>temperature ;
						double tempchange =  temperature;
						cout<< setprecision(3)<< fixed << temperature <<" Celsius is " << celsiusToF(tempchange)<< " Fahrenheit. " <<endl ;
						break;
	  				}
      				else if( choice == 1 ) // calls CelsiusToK function in order to convert the celsius temperature to Kelvin and displays the result .
     					{
						double temperature ;
						cout<<"Enter the amount in Celsius: " ; cin>>temperature ;
						double tempchange =  temperature ;
						cout<< setprecision(3) << fixed <<  temperature <<" Celsius is " << celsiusToK(tempchange)<< " Kelvin. " <<endl ;
						break;
	 	 			}
      				else if(choice == 2 ) // calls fahrenheitToC function in order to convert  the temperature to celsius and display the result .
      					{
						double temperature ;
						cout<<"Enter the amount in Fahrenheit: " ; cin>>temperature ;
						double tempchange =  temperature ;
						cout<< setprecision(3)<< fixed << temperature <<" Fahrenheit is " << fahrenheitToC(tempchange)<< " Celsius. " <<endl ;
						break;
	  				}
      				else if ( choice == 3 ) // calls fahrenheitToK function in order to convert the temperature to Kelvin and displays the result
      					{
						double temperature ;
						cout<<"Enter the amount in Fahrenheit: " ; cin>>temperature ;
						double tempchange =  temperature ;
						cout<< setprecision(3)<< fixed << temperature <<" Fahrenheit is " << fahrenheitToK(tempchange)<< " Kelvin.  " <<endl;
						break ;
	  				}
     				else  if(choice == 4) // calls KelvinToC function in order to convert the temperature to Celsius and displays the result .
      					{
        					double temperature ;
						cout<<"Enter the amount in Kelvin: " ; cin>>temperature ;
						double tempchange =  temperature ;
        					cout<< setprecision(3)<< fixed << temperature <<" Kelvin is " << kelvinToC(tempchange)<< " Celsius.  " <<endl ;  
						break;
      					}
      				else if( choice == 5 ) // Calls KelvinToF function in order to convert the temperature to Fahrenheit and displays the result .
      					{

        					double temperature ;
						cout<<"Enter the amount in Kelvin: " ; cin>>temperature ;
						double tempchange =  temperature ;
       						cout<< setprecision(3)<< fixed << temperature  <<" Kelvin is " << kelvinToF(tempchange)<< " Fahrenheit.  " <<endl ;				  
						break;
      					}
    			}
  		return 0 ;
  	}
