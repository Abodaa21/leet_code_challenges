#include <stdio.h>
#include <stdlib.h>


int maxProduct(int n) {
    int result;
    int max;
    int max2;

    max = 0;
    max2 = 0;
    while (n != 0){
        result = n % 10;
        if (max == result)
            max2 = max;
        if (max < result){
            max2 = max;
            max = result;
        }
        if (max2 < result && max != result)
            max2 = result;
        n /= 10;
    }
    return max * max2;
}