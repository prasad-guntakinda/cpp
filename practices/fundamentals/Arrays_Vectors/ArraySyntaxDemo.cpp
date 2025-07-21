#include<iostream>
#include<array>

// Function prototypes
void arrayWithoutInit();
void arrayWithValues();
void arrayWithBraces();
void display(int numbers[], int size);
void arrayWithSizeDeduce();
void arrayStdWrapper();
void displayStdArray(const std::array<int, 5>& arr);
int main(){

    arrayWithoutInit();    
    arrayWithValues();
    arrayWithBraces();
    arrayWithSizeDeduce();
    arrayStdWrapper();
   
}

void autoArrayDeduce(){
    auto ar = {3,6,9,12};
    //std::cout<<"ar[0]" <<ar[0]<<std::endl;
    //display(ar, ar.size());
}
void arrayWithoutInit(){
    std::cout<< "array initialization without values: " <<std::endl;
    int numbers[5]; //default will be some garbage value
    //numbers[0] = 10;
    std::cout<< "sizeof array: "<< sizeof(numbers) << std::endl;
    std::cout<< "sizeof first element: " << sizeof(numbers[0]) <<std::endl;
    int length = sizeof(numbers)/sizeof(numbers[0]);
    display(numbers, length);
    std::cout<<std::endl;
    
}

void arrayWithValues(){
    std::cout<< "array initialization with values: " <<std::endl;
    int numbers[5];
    numbers[0] = 10; // Initializing the first element rest of the elements will be set to 0
    int length = sizeof(numbers)/sizeof(numbers[0]);
    display(numbers, length);
}

void arrayWithBraces(){
    int numbers[5]{}; // All elements initialized to 0
    int length = sizeof(numbers)/sizeof(numbers[0]);
    std::cout<< "Array Declaration with Empty braces " <<std::endl;
    display(numbers, length);

    std::cout<< "Array Declaration with {} + some values " <<std::endl;
    int numbers2[5]{10,20,30};
    display(numbers2, sizeof(numbers2)/sizeof(numbers2[0]) );
}

void arrayWithSizeDeduce(){
    std::cout<< "Array with Size Deduce" <<std::endl;
    int numbers1[] = {1,2,3};
    display(numbers1, sizeof(numbers1)/sizeof(numbers1[0]));
    std::cout<< "Array with Size Deduce with {}" <<std::endl;
    int numbers2[]{4,5,6};
    display(numbers2, sizeof(numbers2)/sizeof(numbers2[0]));

}

void arrayStdWrapper(){
    std::cout<< "std::array examples:"<<std::endl;
    // 1. Default initialization (all elements are zero)
    std::array<int, 5> arr1{};
    displayStdArray(arr1);

    // 2. Initialization with values
    std::array<int, 5> arr2 = {1, 2, 3, 4, 5};
    displayStdArray(arr2);

    // 3. Partial initialization (remaining elements are zero)
    std::array<int, 5> arr3 = {10, 20};
    displayStdArray(arr3);

    // 4. Accessing and modifying elements
    arr2[0] = 100;
    arr2.at(1) = 200; // at() does bounds checking
    displayStdArray(arr2);

    // 5. Getting size
    std::cout << "Size of arr2: " << arr2.size() << std::endl;

    // 6. Using range-based for loop
    std::cout << "Elements: ";
    for (int value : arr2) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

}
void display(int numbers[], int size){
    std::cout<<"[ ";
    for(int i=0;i<size;i++){
        if(i==0)
            std::cout<< numbers[i];
        else 
            std::cout<<", "<<numbers[i];
    
    }
    std::cout<<" ]" <<std::endl;
}

void displayStdArray(const std::array<int, 5>& arr) {
    std::cout << "[ ";
    for (size_t i = 0; i < arr.size(); ++i) {
        if (i == 0)
            std::cout << arr[i];
        else
            std::cout << ", " << arr[i];
    }
    std::cout << " ]" << std::endl;
}

