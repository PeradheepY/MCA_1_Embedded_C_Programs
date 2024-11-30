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
    char input[50];
    char target[] = {'h', 'i', '\0'}; // Target word: "hi"
    int i;

    printf("Plz enter a str: ");
    scanf("%s", input); // Read input until a space or newline

    // Compare input with the target array and check if it's exactly "hi"
    for (i = 0; target[i] != '\0'; i++) {
        if (input[i] != target[i]) {
            printf("not enter hi\n");
            return 0; // Exit early if mismatch is found
        }
    }

    // If input has extra characters
    if (input[i] != '\0') {
        printf("not enter hi\n");
    } else {
        printf("Hello\n");
    }

    return 0;
}



// Program End



/***********************************************************************************
 * int main() {
    char input[50];
    int i;

    printf("Plz enter a str: ");
    scanf("%s", input); // Read input until a space or newline

    // Check if the input is exactly "hi"
    if (input[0] == 'h' && input[1] == 'i' && input[2] == '\0') {
        printf("Hello\n");
    } else {
        printf("not enter hi\n");
    }

    return 0;
}
 ******************************************************************************/
