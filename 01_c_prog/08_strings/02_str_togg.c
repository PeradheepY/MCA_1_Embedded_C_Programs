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
#include <ctype.h>  

// Function to toggle case
void toggle_case(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {  
            str[i] = tolower(str[i]);  
        } else if (islower(str[i])) {  
            str[i] = toupper(str[i]); 
        }
    }
}

// Main function
int main() {
    char str[] = "RUggEd bOaRD";
    printf("given string is : %s\n", str);
    toggle_case(str);
    printf("the toggle case is : %s\n", str);
    return 0;
}

// Program End
