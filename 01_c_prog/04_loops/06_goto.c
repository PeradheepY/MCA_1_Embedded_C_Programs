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



// Main Function
#include <stdio.h>

int main() {
    int num;

    start: // Label for goto statement
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Given num is Even\n");
    } else {
        printf("Given num is Odd\n");
    }

    // Option to enter another number
    char choice;
    printf("Do you want to check another number? (y/n): ");
    scanf(" %c", &choice); // Space before %c to consume any newline character

    if (choice == 'y' || choice == 'Y') {
        goto start; // Go back to the start label
    } else {
     printf("Exiting...\n");
    }

    return 0;
}

// Program End
