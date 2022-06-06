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


    return(0);
}




