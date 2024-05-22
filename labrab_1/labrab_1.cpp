#include <iostream>
#define END 61
#define START 5
#define length 10
#define width 2

int QS(int left, int right, int pArray[][width]) {
	int temp{ NULL };
	int pivot;
	int pivot_index;
	int left_wall = left;
	int right_wall = right;
        pivot = pArray[left][0];
        while (left < right)
        {
            while ((pArray[right][0] > pivot) && (left < right))
                right--;
            if (left != right) 
            {
                pArray[left][0] = pArray[right][0];
                left++; 
            }
            while ((pArray[left][0] < pivot) && (left < right))
                left++; 
            if (left != right) 
            {
                pArray[right][0] = pArray[left][0];
                right--; 
            }
        }
        pArray[left][0] = pivot;
        pivot_index = left;
        left = left_wall;
        right = right_wall;
        if (left < pivot_index) // Рекурсия
            QS(left, pivot_index - 1, pArray);
        if (right > pivot_index)
            QS(pivot_index + 1, right, pArray);
        return 0;
    }


int main() {
    int Array[length][width]{};
    for (int i{ 0 }; i < length; i++) {
        for (int j{ 0 }; j < 2; j++) {
            Array[i][j] = rand() % (END - START + 1) + START;
            if (j != 1) {
                std::cout << Array[i][j] << "\t";
            }
            else
                std::cout << Array[i][j] << "\n";
        }
    }

    QS(0, length - 1, Array);
    std::cout << "\n\n\n\n";
    for (int i{ 0 }; i < length; i++) {
        for (int j{ 0 }; j < 2; j++) {
            if (j != 1) {
                std::cout << Array[i][j] << "\t";
            }
            else
                std::cout << Array[i][j] << "\n";
        }
    }
}