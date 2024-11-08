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

// Main Function
int main()
{
     int integer = 123456;
     char character = 'A';
     float floating = 3.2f;
     double double_num = 987.123456;
     char string[] = "RuggedBoard";

     printf("integer is : %d\n", integer);
     printf("character is : %c\n", character);
     printf("float is : %.1f\n", floating);
     printf("double is : %.6lf\n", double_num);
     printf("string is : %s\n", string);
     return 0;
}

// Program End
