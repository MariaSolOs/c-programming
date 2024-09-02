int my_strcmp(char *s, char *t) {
    while (*s == *t) {
        if (!*s) {
            return 0;
        }
        s++;
        t++;
    }
    return *s - *t;
}
