#include <stdio.h>
#define MAX 50

// Global Declaration
int arr[MAX], num, pos, val;

void insertElement() {
    if(num == MAX) {
        printf("Array is full. Insertion not possible.\n");
        return;
    }

    printf("Enter position to insert (1 to %d): ", num+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > num+1) {
        printf("Invalid position.\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    // Shift elements to right
    for(int i = num; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = val; // insert at position
    num++; // increase size

    printf("Element inserted successfully.\n");

    // Print updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter the elements:\n");
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    insertElement();

    return 0;
}
