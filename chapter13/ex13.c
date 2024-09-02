#include <stdio.h>
#include <string.h>

void build_index(const char *domain, char *index_url) {
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

int main(void) {
    char domain[] = "knking.com", index_url[100] = "";
    build_index(domain, index_url);
    puts(index_url);

    return 0;
}
