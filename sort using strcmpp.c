#include <stdio.h>
#include <string.h>

#define MAX_LINES 100    // Max number of lines to read
#define MAX_LENGTH 100   // Max length of each line

void sortStrings(char arr[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                // Swap if arr[i] > arr[j]
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    FILE *file;
    char lines[MAX_LINES][MAX_LENGTH];
    int count = 0;

    // Open the text file for reading
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read each line from the file
    while (fgets(lines[count], MAX_LENGTH, file)) {
        // Remove newline character at the end, if any
        lines[count][strcspn(lines[count], "\n")] = '\0';
        count++;
    }
    fclose(file);

    // Sort the strings using strcmp
    sortStrings(lines, count);

    // Print sorted strings
    printf("Sorted strings:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", lines[i]);
    }

    return 0;
}
