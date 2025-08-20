#include <stdio.h>
#include <stdlib.h> 

#define MAX 100       

int main() {
    int arr[MAX], n = 0;   
    int choice, i, pos, val, key, found;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT\n");
        printf("4. DELETE\n");
        printf("5. LINEAR SEARCH\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter number of elements: ");
                scanf("%d", &n);
                if (n > MAX) {
                    printf("Size exceeds maximum limit!\n");
                    n = 0;
                    break;
                }
                printf("Enter elements: ");
                for (i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3: 
                if (n == MAX) {
                    printf("Array is full, cannot insert!\n");
                    break;
                }
                printf("Enter position to insert (1 to %d): ", n + 1);
                scanf("%d", &pos);
                if (pos < 1 || pos > n + 1) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter value to insert: ");
                scanf("%d", &val);

                
                for (i = n; i >= pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = val;
                n++;
                printf("Element inserted.\n");
                break;

            case 4: 
                if (n == 0) {
                    printf("Array is empty, cannot delete!\n");
                    break;
                }
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }

                val = arr[pos - 1];
            
                for (i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Deleted element: %d\n", val);
                break;

            case 5: 
                if (n == 0) {printf("Array is empty!\n");
                    break;
                }
                printf("Enter value to search: ");
                scanf("%d", &key);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        printf("Element %d found at position %d\n", key, i + 1);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Element not found.\n");
                }
                break;

            case 6: 
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

