#include <stdio.h>

struct box {
    int length;
    int breadth;
    int height;
};

int get_volume(struct box b) {
    return b.length * b.breadth * b.height;
}

int is_lower_than_max_height(struct box b, int max_height) {
    return b.height < max_height;
}

int main() {
    int n;  // number of boxes
    int max_height;
    
    scanf("%d", &n);
    scanf("%d", &max_height);

    struct box boxes[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &boxes[i].length, &boxes[i].breadth, &boxes[i].height);
    }

    for (int i = 0; i < n; i++) {
        if (is_lower_than_max_height(boxes[i], max_height)) {
            printf("%d\n", get_volume(boxes[i]));
        }
    }

    return 0;
}
