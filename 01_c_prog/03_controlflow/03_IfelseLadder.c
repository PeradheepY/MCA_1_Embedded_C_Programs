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
    int a, b, c, d;

    // Prompt the user to enter four numbers
    printf("Enter the values of a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Use if-else if ladder without using &&
    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("%d is the largest\n", a);
            } else {
                printf("%d is the largest\n", d);
            }
        } else {
            if (c > d) {
                printf("%d is the largest\n", c);
            } else {
                printf("%d is the largest\n", d);
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                printf("%d is the largest\n", b);
            } else {
                printf("%d is the largest\n", d);
            }
        } else {
            if (c > d) {
                printf("%d is the largest\n", c);
            } else {
                printf("%d is the largest\n", d);
            }
        }
    }

    return 0;
}


// Program End


/***
 * 
 * 
 * 
 * 
 * 
another 
int main() {
    int a, b, c, d;
    int largest;

    // Prompt the user to enter four numbers
    printf("Enter the values of a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Assume a is the largest initially
    largest = a;

    // Check if b is greater than the current largest
    if (b > largest) {
        largest = b;
    }

    // Check if c is greater than the current largest
    if (c > largest) {
        largest = c;
    }

    // Check if d is greater than the current largest
    if (d > largest) {
        largest = d;
    }

    // Output the largest number
    printf("%d is the largest\n", largest);

    return 0;
}

 * 
 * 
 * 
 */
