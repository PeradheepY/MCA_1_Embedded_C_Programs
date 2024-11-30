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
    int rows, cols;

    printf("Please enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols]; 

    // Input the matrix elements
    printf("\t\"Enter matrix elements\"\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\t\"Given matrix is\"\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate and print the sum of each row
    for (int i = 0; i < rows; i++) {
        int sum = 0; 
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j]; 
        }
        printf("Sum of row %d is: %d\n", i + 1, sum);
    }

    return 0;
}


// Program End
