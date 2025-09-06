#include <iostream>

void create_leak() {
    // Allocate memory on the heap
    int* leaky_array = new int[10];
    leaky_array[0] = 1;
    std::cout << "Allocated memory, but not freeing it..." << std::endl;
    // We are forgetting to call 'delete[] leaky_array;'
}

int main() {
    create_leak();
    std::cout << "Program finished." << std::endl;
    return 0;
}
