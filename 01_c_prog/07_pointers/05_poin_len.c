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
    char str[100];
    char *ptr = str;  

    
    printf("Pointer : Calculate the length of the string :\n");
    printf("---------------------------------------------------\n");

    printf("Input a string : ");
    fgets(str, sizeof(str), stdin);  // Approaching with scanf("%s", str) won't handle spaces in the string. 
                                     // It stops reading at the first space, so we are using fgets() instead.

    
    int length = 0;

    
    while (*ptr != '\0') {
        length++;
        ptr++;  // Move the pointer to the next character
    }

   
    printf("The length of the given string %s\n", str);
    printf("is : %d\n", length);

    return 0;
}



// Program End
