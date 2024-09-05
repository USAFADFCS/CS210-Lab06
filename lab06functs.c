/** lab06functs.c
* ===========================================================
* Name: Mike Kloenne
* Section: Instructor
* Project: Lab 6
* Purpose: Returns the time it takes an object to free fall
* from the top of a building.
* ===========================================================
*/
#include <stdio.h>
#include <math.h>

double timeToFallFeet(int feetToFall) {
    const double GRAVITY = 9.7998;
    const double FEET_TO_METERS = 0.3048;

    double metersToFall = 0.0;

    metersToFall = feetToFall * FEET_TO_METERS;
    return sqrt(2 * metersToFall / GRAVITY);
}