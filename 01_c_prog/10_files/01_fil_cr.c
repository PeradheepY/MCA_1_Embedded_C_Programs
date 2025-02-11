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
    char sentence[200];

    // Create and open file for writing
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        return 1;
    }

    // Input text from user
    printf("Create a file (%s) and input text:\n", filename);
    printf("----------------------------------------------\n");
    printf("Input a sentence for the file: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Write text to file
    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    printf("\nThe file %s created successfully...!!\n", filename);

    return 0;
}

// Program End
