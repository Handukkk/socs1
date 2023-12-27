#include <stdio.h>

int main() {
    int T;

    // Input the number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; ++t) {
        int N, P, Q;

        // Input the number of elements in the set
        scanf("%d", &N);

        // Input the elements of the set
        int A[N];
        for (int i = 0; i < N; ++i) {
            scanf("%d", &A[i]);
        }

        // Input the locations chosen by Bibi and Lili
        scanf("%d %d", &P, &Q);

        // Compare the values at locations P and Q
        if (A[P - 1] > A[Q - 1]) {
            printf("Case #%d: Bibi\n", t);
        } else if (A[P - 1] < A[Q - 1]) {
            printf("Case #%d: Lili\n", t);
        } else {
            printf("Case #%d: Draw\n", t);
        }
    }

    return 0;
}

