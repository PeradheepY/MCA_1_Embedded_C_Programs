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

    // Input filename from user
    printf("Read an existing file:\n");
    printf("------------------------------\n");
    printf("Input the filename to be opened: ");
    scanf("%99s", filename);

    // Open file for reading
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        return 1;
    }

    // Read and display the content of the file
    printf("\nThe content of the file %s is:\n", filename);
    while ((c = fgetc(fptr)) != EOF) {
        putchar(c);
    }
    fclose(fptr);

    return 0;
}

// Program End
