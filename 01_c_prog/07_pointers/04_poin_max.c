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
    int num1, num2;

    // Declare pointers for the numbers
    int *ptr1, *ptr2;

    // Input the numbers
    printf("Pointer : Find the maximum number between two numbers :\n");
    printf("------------------------------------------------------------\n");

    printf("Input the first number : ");
    scanf("%d", &num1);
    printf("Input the second number : ");
    scanf("%d", &num2);

    // Point the pointers to the respective variables
    ptr1 = &num1;
    ptr2 = &num2;

    // Find and print the maximum number using pointers
    if (*ptr1 > *ptr2) {
        printf("The maximum number is : %d\n", *ptr1);
    } else {
        printf("The maximum number is : %d\n", *ptr2);
    }

    return 0;
}


// Program End
