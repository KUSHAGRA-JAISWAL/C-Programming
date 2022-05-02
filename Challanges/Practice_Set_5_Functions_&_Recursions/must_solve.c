/**
 * @file must_solve.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* What will the following line produce when a = 3 in a C program. printf("%d %d %d \n", a, ++a, a++); */

#include <stdio.h>
int main()
{
    // main function

    int a = 3;
    // declaring variable and storing its value.

    printf("%d %d %d \n", a, ++a, a++);
    // prints the result.

    /*
    Lot of you will say that this line will print (3, 4, 4) but it's wrong because :-

    In this type of situations compiler takes the argument from right to left

    so the correct answer will be (5, 5, 3) in this case.
    */

    return 0;
}