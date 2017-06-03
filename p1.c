/*

Name: Michael Odumosu
Unix login id: mo422733
Lab Instructor Name: Julia Turner
Lab Day: Friday
Lab Time: 1:40pm

Project Description: This project takes in two base decimal. The first number
that the program should receive should be the number that will be converted by
the program. The second number is the radix that will indicate to the program how
to convert the number. The radix number represents the base number system that the 
1st decimal number will be converted to. The radix however, should be any number between 
2-16. After conversion, the program outputs the number.
*/
#include <stdio.h> //calling libraries
#include <string.h>
#include <stdlib.h>
  
/*SYSTEM BUGS
- putty only accept chars as variable names for integers
-scanf is terrible
*/


// the executable function
int main(void) {   

	
   
 	int x; //the number to be converted
	int y;  // the radix system from 2-16 only
	char process [23];  //algorithm places digit values in array for radix conversion
	int a = 2; //quotient variable, when zero is reached radix number is made
	int b = 0; // holder to retrieve remainder after radix division and have printed as answer
	int c = 0; //for uniformity in array, all ints converted to char
	char d = 0; // remainder variable to be put into process array 
 	int e = 0; // index for process array
	puts("Enter the value to be converted:"); //asks the user for input
	scanf(" %d ", &x);
	puts("Enter the radix base");
	scanf(" %d ", &y);	// gets input from user
	
	printf("decimal  is : %d\n", x); //returns the decimal
	printf("radix is : %d\n",y); //returns the radix

	do {
	  
	  a = x/y;
	  c = x%y;
	  x = a;
	  
	  if(c >= 10) {
	  
	  switch (c) {  // for the digits that are greater than 10 corresponding values
	    case(10):
			d= 'A';
			break;
		case(11):
			d= 'B';
			break;
		case(12):
			d= 'C';
			break;
		case(13):
			d= 'D';
			break;
		case(14):
			d= 'E';
			break;
		case(15):
			d= 'F';
			break;
		default:
			printf("bug");
		}
		
	}
	else {
		d =  '0' + c;
		}
		
       	 process[e] = d ;
	  e++;	
	  
	  
	  printf("quotient :%d\n",a);
	  printf("remainder: %d\n",c);
	  
	}
	while (a != 0);
	

	printf("Answer is :");
	
	
        //for outputting to  an array
	//printf("it should return the same size : %d", (sizeof(process)/4));
	//for(e=(sizeof(process)/4)-1; e = 0; e--)
        while (e != 0){
	  e --;
		
		printf("%c",process[e]);
		
	}
	printf("\n");
	return 0;
	
		
}                  



