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

#include <stdio.h>

int main() {
    char ch;

    printf("Enter Characters to display (press Enter to finish):\n");

    while (1) { // Infinite loop to keep reading characters
        scanf("%c", &ch); // Read a single character

        if (ch == '\n') { // Stop if Enter key (newline) is pressed
            break;
        }

        printf("%c", ch); // Print the entered character
    }

    printf("\nEntered Characters are as above.\n");

    return 0;
}



// Program End
