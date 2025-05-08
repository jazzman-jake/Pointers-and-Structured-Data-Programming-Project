#include <iostream>
using namespace std;
  
//Reverse function, returns a pointer to original array in reverse order
int* ReverseArray(int const arr[], int size) {
    int* reversed = new int[size];
    for (int i = 0; i < size; ++i) {
        reversed[i] = arr[size - 1 - i];
    }
    return reversed;
}

//print function to know array shown and how many elements are inside
void print(int const arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 10;
    int original[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

    cout << "Original array:\n";
    print(original, SIZE);

    int* reversed = ReverseArray(original, SIZE);

    cout << "Reversed array:\n";
    print(reversed, SIZE);

    // Deallocate dynamically allocated memory
    delete[] reversed;

    return 0;
}
