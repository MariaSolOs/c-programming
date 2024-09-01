#define N 10

int main(void) {
    double ident[N][N];

    int zeros = N;
    for (double *p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++) {
        if (zeros == N) {
            *p = 1.0;
            zeros = 0;
        } else {
            *p = 0.0;
            zeros++;
        }
    }

    return 0;
}
