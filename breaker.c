#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool is_in(int arr[], int size, int n) {
    for (int j = 0; j < size; j++) {
        if (arr[j] == n) {
            return true;
        }
    }
    return false;
}

int main() {
    const int ARRAY_SIZE = 100;
    int arr[ARRAY_SIZE];

    // Seed the random number generator
    srand(time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++) {
        int newNum;
        do {
            newNum = rand();
            newNum *= (i % 2 == 0 ? -1 : 1);
        } while (is_in(arr, i, newNum));

        arr[i] = newNum;
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

// ARG=$(./a.out) ; ./push_swap $ARG | wc -l

//4294967284