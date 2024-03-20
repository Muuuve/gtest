#include <stdio.h>

#include "roots.h"

int main()
{
    double result[2];
    if (roots(result, 5, 3, -26)){
        printf("%f %f", result[0], result[1]);
    }
    else{
        printf("No roots");
    }
}
