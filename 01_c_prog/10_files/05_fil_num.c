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

// Main function
int main() {
    FILE *fptr;
    char filename[100];
    char c;
    int lines = 0;

    // Input filename from user
    printf("Read the file and count the number of lines:\n");
    printf("--------------------------------------------------\n");
    printf("Input the file name to be opened: ");
    scanf("%99s", filename);

    // Open file for reading
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        return 1;
    }

    // Count the number of lines in the file
    while ((c = fgetc(fptr)) != EOF) {
        if (c == '\n') {
            lines++;
        }
    }
    fclose(fptr);

    // Display the number of lines
    printf("The lines in the file %s are: %d\n", filename, lines);

    return 0;
}

// Program End
