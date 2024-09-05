// Not much is being provided to you this time.

// That's the point!  In this lab, you are going 
// to practice solving problems using a formal
// process.
//--------------------------------------------------
/** lab06.c
* ===========================================================
* Name: Mike Kloenne
* Section: Instructor Corp
* Project: Lab 6
* Purpose: Learn programming design process.
* ===========================================================
*/
#include <stdio.h>
#include "lab06functs.h"

int main(void) {

    int stories = 0;
    double time = 0.0;

    printf("Enter number of stories: ");
    scanf("%d", &stories);
    //printf("\n");

    time = timeToFallFeet(stories * 20);

    printf("It takes %.3lf seconds for an object to fall from a building %d stories tall.\n", time, stories);

    return 0;
}