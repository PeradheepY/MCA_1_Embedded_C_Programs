/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Natarajan S  ( natarajan.s@ruggedboard.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    int a = 10, b = 15; 

    // arithmetic operations
    printf("Addition       : a+b = %d\n", a + b);
    printf("Subtraction    : a-b = %d\n", a - b);
    printf("Multiplication : a*b = %d\n", a * b);
    printf("Division       : a/b = %d\n", a / b); 
    printf("Modulo Division: %d\n", a % b);

    // Performing Pre-increment and pre-decrement 
    printf("Increment the value of a by 1  : %d\n", ++a); 
    printf("Decremented the value of b by 1: %d\n", --b); 


    return 0;
}


// Program End
