#include <stdio.h>
/* Gabu Nogueira June 6 2022
*/

/* ************* MAIN FUNCTION ********* */

int main(){
  
/* *************** PUTS ************************ */
    puts("I'm a computer"); //it prints, and also it does add \n to jump to a new line.

/* **************** PRINTF  *****************/
/* ******* scape sequence or newline = /n  ********* */
    puts("-------------- Exercise 1");
    printf("This is the way the word ends");  //it prints, but it doesn't add \n to jump to a new line
    printf("\nbut \nnot \nto me\n");

/* -------- Escape Sequences ------------
    \n -> Newline, start a new line of text
    \t -> Tab, hop over se many spaces
    \' -> Escaped single quote
    \" -> Escaped double quote
    \\ -> Display backslash character
*/  
    puts("------------ Exercise 2");
    printf("Behold!\nI am a \"string\" of \\text. \t ok\n\n");
    // A good option is to use single-quote '' instead of \" ---> printf("I'm 'Learning', ok?");

/* *********************** Strings and Integers ******************* */

// % is place holder flag and the 'd' represents an integer value in base 10, decimal. 
    printf("Here is a value: %d \n", 27);
    printf("Everyone knows that %d+%d=%d.\n",2,2,4);

// %s represents strings values ----> printf("%s","It'll replace the percent-s");
    printf("Everyone knows that %d+%d=%d. %s\n",2,2,2+2,"It was sum right here."); // you can sum directly

// %c represents single string value ----> printf("%c",'E'); The E will replace that percent-c
    printf("You are a %c %s.\n",'C',"Programmer");

/* ------------ Common Placeholders --------------
    %d --> Integer (whole number) values
    %s --> Strings
    %f --> Floating point values 
    %c --> Single characters
    %% --> The percent sign
    
    When using the Placeholders they must hold the same sequence that they were put to hold.
    Example ---> printf("%d + %d" = %d,n,n,r ); the sequence must be de number + number = result.
*/
 
 /* ************************ VARIABLES **************************** */
/*

--------------- Declaration
ch = 'x'; <-- Assingning value
a = x; <--- Assign the value of another variable
y = line/4; Assign the result of an expresion
w = width(); Assign the return value of a function


--------------- Qualifiers
long
short
signed
unsigned



*/
    int age;
    age = 30;
    printf("The C Language is over %d years old\n",age);
    age = 35;
    printf("The C Language is over %d years old\n",age);


    char x,y,z;
    x='A';
    y='B';
    z='C';

    printf("It's as easy as %c%c%c\n",x,y,z);
    x='Y';
    y='O';
    z='U';

    printf("It's as easy as %c%c%c\n",x,y,z);

    float pi;
    pi=22.00/7.0;
    printf("The ancients calculated PI as %f.\n",pi);

/* ****************** GETCHAR * PUTCHAR ****************** */
/*

It works with int (not char) values.
They interpreter specials error codes. Integer values are preferred to read those error codes.
Stream-Oriented
It is not interactive
Character I/O

*/

    // int c;

    //     printf("Type a letter: ");
    //     // c = getchar();
    //     printf("You typed '%c'.\n",c); //
    //     printf("You typed '%d'.\n",c); //code value

        // printf("You typed '");
        // putchar(c);
        // printf("'.\n");
        
        // printf("You typed ");
        // putchar(c);
        // printf("\n");

        // int a,b,c;

        // printf("Type two letters: ");
        // a = getchar();
        // putchar(a);
        // b = getchar();
        // putchar(b); 
        // c = getchar();
        // putchar(c);
       

        // streams output are buffered, it means that the computer waits until the buffer is full or flushed.

/* ****************************** SCANF ***************************** */
/**
 * Reads specific data types from standard input 
 * Assigns values to a variable
 * Uses printf() placeholders
 * Uses & (address-of) operator
 *  
 *  scanf("format",&var);
 *  determines the type of input resquested
 *  var is declared variable in the code
 *  The & operator prefixes the variable
 *  The & is not required to prefix a string or array
 * 
 */
//  int l;
//     printf("type a integer: ");
//     scanf("%d",&l); //%f
//     printf("Integer %d\n",l); //%f

/** *********************************  STRING  ************************************
 * AN ARRAY OF CHAR VARIABLES
 * ENCLOSED IN DOUBLE QUOTES
 * THE FINAL CHARACTER OF THE STRING IS THE NULL CHARACTER
 * NULL CHARACTER ESCAPE SEQUENCE IS \0
 * You must use %s to print it
 */

 char password[] = "spatula";
    printf("The password is %s\n",password);

//  char name[15];
//     printf("Your name? ");
//     scanf("%s",name); //scanf function isn't a string input function - when de user types more than 1 word, it stops on first. It is a string word input function
//     //you shouldn't put scanf as a input strings. (bad idea)
//     printf("You are %s.\n",name);
// char input[64];
//     printf("Instructions: ");         
//     fgets(input,64,stdin);          //You should use fgets(x,y,z); with strings
//     puts("Thank you! Here are you instructions:");
//     puts(input);

/****************************************************************************
 * @brief MATH OPERATORS
 * Sum +
 * Subtraction -
 * Multiplication *
 * Increment ++
 * Decrement ++
 * Module %
 * --------------------
 * Equations are evaluated left to right -->
 * Multiplication and division are done first
 * Addition and subtraction are done next
 * Paratheses used to prioritize some calculations
 * 
 * ************************************************************************************
 * *********************************** Math Functions **********************
 * We gonna use math.h for some operations
 * it works with real numbers, floating-point values
 * double variables required; float okay
 * double carries twice the precision of float
 * the ^ operator is not the "power" operator
 * C has no square root operator
 */
#include <math.h>

float r;
r = sqrt(2.0);
printf("%f\n",r);

float b;

b = pow(2.0,8.0);
printf("2 to the 8th power us %f\n",b);



/**
 * @brief ***************************** DECISIONS ************************************
 * Programs execute top-down
 * Decisions break top-down flow
 * the if statement tests a condition
 * When the codition is true, program flow is altered 
 * -----------------------------------------------------
 * Comparison Operators
 * is equal to ==
 * less than <
 * greater than >
 * Not equal to !=
 * Less than equal to <=
 * Greater than or equal to >=
 */
int ifcondition(){
        
        int moreCondition ;

        printf("Type an integer: ");
        scanf("%d",&moreCondition);
        if(moreCondition > 10){
            printf("You typed %d, and it is greater than 10\n.",moreCondition); //conditon 1
        }
        else if(moreCondition < 10){
            printf("You typed %d, and it is less than 10\n.",moreCondition); //condition 2
        } else{
            printf("You typed %d, and it is equal to 10.\n",moreCondition); // if both condition is false
        }
        return 0;
    }

// ifcondition();

/*******************************  SWITCH   ****************************************/
char sFunction(){    
        char sCondition;
        
        printf("Your choice (A,B,C)\n: ");
        scanf("%c",&sCondition);

        switch(sCondition)
        {
        case 'A':
        case 'a':
            printf("%c, Excelente choice !.\n",sCondition);
            break;
        case 'B':
        case 'b':
            printf("%c, This is the most common choice.\n",sCondition);
            break;
        case 'C':
        case 'c':
            printf("%c, I question your decision.\n",sCondition);
            break;
        default:
            printf("%c,This is a invalid choice.\n",sCondition);
            break;
        }
        return (0);
    }



    return(0);
}




