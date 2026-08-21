int uniquePaths(int m, int n) {
    int arr[n];
    int i;
    int j;

    while (i < n)
        arr[i++] = 1;
    i = 1;
    while (m > i)
    {
        j = 1;
        while (n > j)
        {
            arr[j] = arr[j] + arr[j - 1];
            j++;
        }
        i++;
    }
    return arr[n - 1];
}