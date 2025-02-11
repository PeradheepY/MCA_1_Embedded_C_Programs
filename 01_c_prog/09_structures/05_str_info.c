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

// Structure to store student information
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

// Main function
int main() {
    struct Student students[5];

    // Input information for 5 students
    printf("Enter information of students:\n");
    for (int i = 0; i < 5; i++) {
        students[i].roll_number = i + 1;
        printf("For roll number %d,\n", students[i].roll_number);
        printf("Enter first name: ");
        scanf("%49s", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display information of 5 students
    printf("Displaying Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nRoll number: %d\n", students[i].roll_number);
        printf("First name: %s\n", students[i].name);
        printf("Marks: %.1f\n", students[i].marks);
    }

    return 0;
}

// Program End
