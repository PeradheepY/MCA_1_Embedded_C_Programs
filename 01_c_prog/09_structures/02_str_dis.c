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

// Structure to store distance
struct Distance {
    int feet;
    float inch;
};

// Main function
int main() {
    struct Distance dist1, dist2, sum;

    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);

    printf("Enter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    
    sum.feet = dist1.feet + dist2.feet;
    sum.inch = dist1.inch + dist2.inch;

    // Convert inches to feet if greater than 12
    if (sum.inch >= 12.0) {
        sum.feet += (int)(sum.inch / 12);
        sum.inch = (int)sum.inch % 12 + (sum.inch - (int)sum.inch);
    }

    
    printf("Sum of distances = %d'-%.1f\"\n", sum.feet, sum.inch);

    return 0;
}

// Program End
