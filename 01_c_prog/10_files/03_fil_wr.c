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
    char filename[100] = "test.txt";
    char line[200];
    int num_lines;

    // Create and open file for writing
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        return 1;
    }

    // Input number of lines from user
    printf("Write multiple lines in a text file and read the file:\n");
    printf("------------------------------------------------------------\n");
    printf("Input the number of lines to be written: ");
    scanf("%d", &num_lines);
    getchar(); // Consume newline character left by scanf

    // Input lines from user and write to file
    printf("\n:: The lines are ::\n");
    for (int i = 0; i < num_lines; i++) {
        fgets(line, sizeof(line), stdin);
        fprintf(fptr, "%s", line);
    }
    fclose(fptr);

    // Open file for reading
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        return 1;
    }

    // Read and display the content of the file
    printf("\nThe content of the file %s is:\n\n", filename);
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }
    fclose(fptr);

    return 0;
}

// Program End
