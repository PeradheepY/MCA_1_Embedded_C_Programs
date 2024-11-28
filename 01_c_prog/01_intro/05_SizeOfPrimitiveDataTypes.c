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

int main()
{
     char c;
     unsigned char uc;
     int i;
     unsigned int ui;
     short s;
     unsigned short us;
     long l;
     unsigned long ul;
     long long ll;
     unsigned long long ull;
     float f;
     double d;
     long double ld;

     // for my understanding i've printed all the types
     printf("Size of 'char' is             = %d bytes\n", (int)sizeof(c));
     printf("Size of 'unsigned char' is    = %d bytes\n", (int)sizeof(uc));
     printf("Size of 'short' is            = %d bytes\n", (int)sizeof(s));
     printf("Size of 'unsigned short' is   = %d bytes\n", (int)sizeof(us));
     printf("Size of 'int' is              = %d bytes\n", (int)sizeof(i));
     printf("Size of 'unsigned int' is     = %d bytes\n", (int)sizeof(ui));
     printf("Size of 'long' is             = %d bytes\n", (int)sizeof(l));
     printf("Size of 'unsigned long' is    = %d bytes\n", (int)sizeof(ul));
     printf("Size of 'long long' is        = %d bytes\n", (int)sizeof(ll));
     printf("Size of 'unsigned long long' is = %d bytes\n", (int)sizeof(ull));
     printf("Size of 'float' is            = %d bytes\n", (int)sizeof(f));
     printf("Size of 'double' is           = %d bytes\n", (int)sizeof(d));
     printf("Size of 'long double' is      = %d bytes\n", (int)sizeof(ld));

     return 0;
}

// Program End
