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
    struct Student student;

    // Input student information
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%49s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_number);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Display student information
    printf("Displaying Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll_number);
    printf("Marks: %.1f\n", student.marks);

    return 0;
}

// Program End
