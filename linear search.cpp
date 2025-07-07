#include <stdio.h>

int main() {
    int arr[100], size, element, found = 0;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element %d found at index %d\n", element, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found\n", element);
    }

    return 0;
}

