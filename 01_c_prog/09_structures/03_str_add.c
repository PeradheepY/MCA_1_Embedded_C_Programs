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

// Structure to store complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex add_complex(struct Complex n1, struct Complex n2) {
    struct Complex result;
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return result;
}

// Main function
int main() {
    struct Complex num1, num2, sum;

    // Input first complex number
    printf("For 1st complex number\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input second complex number
    printf("For 2nd complex number\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Add the two complex numbers
    sum = add_complex(num1, num2);

    // Display the sum of complex numbers
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);

    return 0;
}

// Program End
