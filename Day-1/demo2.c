#include<stdio.h>
/*
	Rules of Identifiers: 
	• Should start with alphabet or with _ (underscore) 
	• Can include alphabets, _ (underscore),digits 
	• Case sensitive
*/
int main()
{
    int a,b;
	a = 9;
	a = 10;
	int A;      //valid
	int abc;    //valid
	int _abc;   //valid
	int abc123; //valid

	// int x;  // ok
    // int x;  //Not ok
    // int X; //ok

    /*
	int 1a; //in-valid
	int !a; //in-valid
	int @a; //in-valid
	int $a; //valid
	*/

	int a bc;//in-valid Space Not allowed
    
	//1 = 10; //we cant modify constant value  l-value error
	return 0;
}
