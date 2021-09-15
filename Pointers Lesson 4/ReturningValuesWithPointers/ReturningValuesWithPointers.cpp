#include <iostream>

void getMinAndMax(int numbers[], int *min, int *max) {
    int arrayLength = sizeof(numbers) + 1;
    *max = numbers[0];
    *min = numbers[0];
    for (int i = 1; i < arrayLength; i++) {
        if (numbers[i] > *max)
            *max = numbers[i];
        if (numbers[i] < *min)
            *min = numbers[i];
    }
}

int main() {   
    int numbers[5] = { 5,4,-2,29,6 };
    int max;
    int min;
    getMinAndMax(numbers, &min, &max);
    std::cout << "Min value is: " << min << std::endl;
    std::cout << "Max value is: " << max << std::endl;
}

