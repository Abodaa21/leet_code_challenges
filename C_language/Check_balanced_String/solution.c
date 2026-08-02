#include <stdio.h>
#include <stdbool.h>


bool isBalanced(char* num) {
    int i;
    int even;
    int odd;

    i = 0;
    even = 0;
    odd = 0;
    while (num[i]){
        if (i % 2 != 0)
            odd += num[i] - '0';
        else
           even += num[i] - '0';
        i++;
    }
    return (even == odd);
}
