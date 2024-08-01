#include <iostream>
#include <cstring>  // For memset

// The memset function in C++ is commonly used to initialize all elements of an array to a specific value. This function is declared in the <cstring> header. It can be used with arrays of any type, but it's particularly useful with arrays of primitive types like char, int, and float.

int main() {
    const int size = 10;
    int arr[size];

    // Initialize all elements of the array to 0
    memset(arr, 1, sizeof(arr)); //memset sets the memory byte-by-byte. This means it is not suitable for setting non-zero values for types larger than one byte (e.g., int).

    // Print the array to verify the initialization
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
