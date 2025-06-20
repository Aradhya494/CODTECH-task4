#include <stdio.h>
#include <string.h>

void compressRLE(const char *input, char *output) {
    int count, i, j = 0;
    int len = strlen(input);

    for (i = 0; i < len; i++) {
        output[j++] = input[i];
        count = 1;

        while (i + 1 < len && input[i] == input[i + 1]) {
            count++;
            i++;
        }

       
        j += sprintf(&output[j], "%d", count);
    }
    output[j] = '\0';
}

int main() {
    char input[1000], output[1000];

    printf("Enter a string to compress: ");
    scanf("%s", input);

    compressRLE(input, output);

    printf("Compressed: %s\n", output);
    return 0;
}







