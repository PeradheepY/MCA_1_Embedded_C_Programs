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

// Function to count vowels, consonants, and total alphabets
void count_characters(const char *str, int *vowels, int *consonants, int *alphabets) {
    *vowels = 0;
    *consonants = 0;
    *alphabets = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            (*alphabets)++;
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

// Main function
int main() {
    char str[] = "How are you";
    int vowels, consonants, alphabets;
    printf("The given string is: %s\n", str);
    count_characters(str, &vowels, &consonants, &alphabets);
    printf("Number of Alphabets in given string is: %d\n", alphabets);
    printf("Number of vowels in given string is: %d\n", vowels);
    printf("Number of consonants in given string is: %d\n", consonants);
    return 0;
}

// Program End
