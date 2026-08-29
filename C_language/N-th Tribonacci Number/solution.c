#include <stdio.h>
#include <stdlib.h>

int tribonacci(int n) {
    static int arr[1000];
    static int initialized;
    int i;

    i = 0;
    if (!initialized)
    {
        while (i < 1000)
            arr[i++] = -1;
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        initialized = 1;
    }
    if (arr[n] != -1)
        return arr[n];
    arr[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    return arr[n];
}

int main(int argc, char* argv[]){
    printf("%d",tribonacci(atoi(argv[1])));
}