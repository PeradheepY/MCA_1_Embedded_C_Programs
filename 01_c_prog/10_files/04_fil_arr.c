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
#include <stdlib.h>

// Main function
int main() {
    FILE *fptr;
    char filename[100];
    char lines[100][200];
    int i = 0;

    // Input filename from user
    printf("Read the file and store the lines into an array:\n");
    printf("------------------------------------------------------\n");
    printf("Input the filename to be opened: ");
    scanf("%99s", filename);

    // Open file for reading
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        return 1;
    }

    // Read lines from file and store into array
    while (fgets(lines[i], sizeof(lines[i]), fptr) != NULL) {
        lines[i][strcspn(lines[i], "\n")] = '\0'; // Remove newline character
        i++;
    }
    fclose(fptr);

    // Display the content of the array
    printf("\nThe content of the file %s are:\n\n", filename);
    for (int j = 0; j < i; j++) {
        printf("%s\n", lines[j]);
    }

    return 0;
}

// Program End
