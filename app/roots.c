#include <stdio.h>
#include <math.h>
#include "roots.h"

int roots(double* result, double a, double b, double c){
    double discr;
    discr = b * b - 4 * a * c;
    if (discr < 0 || a == 0){
        return 0;
    }

    discr = sqrt(discr);

    result[0] = (-b + discr) / (2 * a);
    result[1] = (-b - discr) / (2 * a);
    return 1;
}