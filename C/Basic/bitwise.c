#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
      int max_and = 0, max_or = 0, max_xor = 0;

    // Loop through all pairs (a, b) where 1 <= a < b <= n
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            // Calculate the AND, OR, and XOR for the pair (a, b)
            int and_result = a & b;
            int or_result = a | b;
            int xor_result = a ^ b;

            // Update the maximum values for each operation if the result is less than k
            if (and_result < k && and_result > max_and) {
                max_and = and_result;
            }
            if (or_result < k && or_result > max_or) {
                max_or = or_result;
            }
            if (xor_result < k && xor_result > max_xor) {
                max_xor = xor_result;
            }

            // Early termination if max value for any operation reaches k-1
            if (max_and == k-1 && max_or == k-1 && max_xor == k-1) {
                break;
            }
        }
        if (max_and == k-1 && max_or == k-1 && max_xor == k-1) {
            break;
        }
    }

    // Print the results for AND, OR, XOR
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
