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


void change_case(char *str) {
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
    char str[] = "PHYTEC";
    printf("Original string: %s\n", str);
    change_case(str);
    printf("Changed case: %s\n", str);
    return 0;
}


// Program End
