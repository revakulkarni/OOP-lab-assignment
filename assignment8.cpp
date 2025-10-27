#include <iostream>
using namespace std;

template <class T>
void selection_sort(T a[], int n)
{
    int i, j, min;

    // Selection sort algorithm
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main() {
    int choice;

    do {
        cout << "\n--- Welcome ---\n";
        cout << "1. Sort Integer Array\n";
        cout << "2. Sort Float Array\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int n;
                cout << "Enter size of integer array: ";
                cin >> n;
                int a[n];
                cout << "Enter " << n << " elements: ";
                for(int i = 0; i < n; i++) {
                    cin >> a[i];
                }
                selection_sort(a, n);
                break;
            }
            case 2: {
                int n;
                cout << "Enter size of float array: ";
                cin >> n;
                float a[n];
                cout << "Enter " << n << " elements: ";
                for(int i = 0; i < n; i++) {
                    cin >> a[i];
                }
                selection_sort(a, n);
                break;
            }
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 3);

    return 0;
}
