void censor(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'o') {
            s[i] = s[i + 1] = s[i + 2] = 'x';
        }
    }
}
