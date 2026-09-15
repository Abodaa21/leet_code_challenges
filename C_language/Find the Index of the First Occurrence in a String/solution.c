int strStr(char* haystack, char* needle) {
    int i;
    int start;
    int j;

    i = 0;
    while(haystack[i])
    {
        start = i;
        j = 0;
        while(haystack[i + j] && needle[j] && haystack[i + j] == needle[j])
            j++;
        if (!needle[j])
            return start;
        i++;
    }
    return - 1;
}