#include<stdio.h>
//this statement will be processed by preprocessor
    //1. declaration of library functions
    //2. definition of symbolic constants/macros
    //3. typedefinitions
    //4. data type declarations

 /*
 	Multiline comment
 	First program
 */

//main is identifier //main is function
//int here is return type of function
int main()//Entry point function
{
    printf("Hello World \n");//  It means To print msg on Console
                             //Single line comment
                             ////call to library functio
  
    return 0; ////0 indicates sucessful completion  
}

// OR

// void main(void) //void here indicates function do not return any value
// {               //void inside () indicates function do not take any input 
//     printf("One \n");
        
// }//if return is not mentioned execution control will take out of function automatically


/*
To Code : $gcc demo01.c -o demo01.out
          $ls
		  $./demo01.out
*/