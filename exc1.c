#include <stdio.h>

void imprimeNaturais(int N) {
    if (N < 0) {
        return;
    }
    printf("%d\n", N);
    imprimeNaturais(N - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    imprimeNaturais(N);
    return 0;
}