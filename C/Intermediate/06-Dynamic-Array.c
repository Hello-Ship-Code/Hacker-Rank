#include <stdio.h>
#include <stdlib.h>

int* total_number_of_books;
int** total_number_of_pages;

int main() {
    int total_number_of_shelves;
    if (scanf("%d", &total_number_of_shelves) != 1 || total_number_of_shelves <= 0) {
        return 1; // Invalid input
    }

    // Allocate and initialize arrays
    total_number_of_books = (int*)calloc(total_number_of_shelves, sizeof(int));
    total_number_of_pages = (int**)calloc(total_number_of_shelves, sizeof(int*));
    if (!total_number_of_books || !total_number_of_pages) {
        return 1; // Allocation failure
    }

    int total_number_of_queries;
    if (scanf("%d", &total_number_of_queries) != 1 || total_number_of_queries < 0) {
        free(total_number_of_books);
        free(total_number_of_pages);
        return 1; // Invalid input
    }

    while (total_number_of_queries--) {
        int type_of_query;
        if (scanf("%d", &type_of_query) != 1) {
            break; // Invalid query type
        }

        if (type_of_query == 1) {
            int x, y;
            if (scanf("%d %d", &x, &y) != 2 || x < 0 || x >= total_number_of_shelves || y < 0) {
                continue; // Invalid shelf or pages
            }
            int count = total_number_of_books[x];

            // Reallocate memory for the shelf
            int* temp = (int*)realloc(total_number_of_pages[x], (count + 1) * sizeof(int));
            if (!temp) {
                continue; // Allocation failure
            }
            total_number_of_pages[x] = temp;
            total_number_of_pages[x][count] = y;
            total_number_of_books[x]++;
        } else if (type_of_query == 2) {
            int x, y;
            if (scanf("%d %d", &x, &y) != 2 || x < 0 || x >= total_number_of_shelves || y < 0 || y >= total_number_of_books[x]) {
                continue; // Invalid shelf or book index
            }
            printf("%d\n", total_number_of_pages[x][y]);
        } else if (type_of_query == 3) {
            int x;
            if (scanf("%d", &x) != 1 || x < 0 || x >= total_number_of_shelves) {
                continue; // Invalid shelf
            }
            printf("%d\n", total_number_of_books[x]);
        }
    }

    // Free memory
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (total_number_of_pages[i]) {
            free(total_number_of_pages[i]);
        }
    }
    free(total_number_of_pages);
    free(total_number_of_books);

    return 0;
