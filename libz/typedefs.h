#include <iostream>

typedef struct{
    int* numerical;
    std::string* str;
    char* char_;
    int* bool_;
}MulArr;


/*
int main() {
    MulArr array[5]; // Define an array of MulArr with 5 elements

    // Allocate memory for numerical array in each MulArr element
    for (int i = 0; i < 5; i++) {
        array[i].numerical = (int*)malloc(3 * sizeof(int)); // Assuming numerical array has 3 elements
        memset(array[i].numerical, 0, 3 * sizeof(int)); // Initialize numerical array to 0
    }

    // Allocate memory for str and char_ array in each MulArr element
    for (int i = 0; i < 5; i++) {
        array[i].str = (char*)malloc(20 * sizeof(char)); // Assuming str is a string with max length 20
        array[i].char_ = (char*)malloc(10 * sizeof(char)); // Assuming char_ is a string with max length 10
        strcpy(array[i].str, "Hello"); // Initialize str with "Hello"
        strcpy(array[i].char_, "World"); // Initialize char_ with "World"
    }

    // Allocate memory for bool_ array in each MulArr element
    for (int i = 0; i < 5; i++) {
        array[i].bool_ = (int*)malloc(2 * sizeof(int)); // Assuming bool_ array has 2 elements
        memset(array[i].bool_, 1, 2 * sizeof(int)); // Initialize bool_ array to 1
    }

    // Access and manipulate the elements of the array as needed
    printf("Value of numerical[0] in the first element: %d\n", array[0].numerical[0]);
    printf("Value of str in the second element: %s\n", array[1].str);
    printf("Value of char_ in the third element: %s\n", array[2].char_);
    printf("Value of bool_[0] in the fourth element: %d\n", array[3].bool_[0]);

    // Free the allocated memory for each array in each MulArr element
    for (int i = 0; i < 5; i++) {
        free(array[i].numerical);
        free(array[i].str);
        free(array[i].char_);
        free(array[i].bool_);
    }

    return 0;
}
*/