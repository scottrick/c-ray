#include <stdio.h>

void testFile();

int main(int numargs, const char **args) {
    testFile();
    return 0;
}

void testFile() {
    int width = 600;
    int height = 400;
    int max_value = 255;
    printf("P3\n");
    printf("%d %d\n", width, height);
    printf("%d\n", max_value);

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            printf("%d 0 %d\n", (x * max_value / width),
                   (y * max_value / height));
        }
    }
}
