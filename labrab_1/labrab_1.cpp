#include <iostream>
#define END 100
#define START 50
#define length 10

int swap(int first, int second, int* pArray) {
	
	int temp = pArray[second];
	pArray[second] = pArray[first];
	pArray[first] = temp;
	return 0;
}
//быстрая сортировка

int QS(int left , int right, int* pArray) {
	int temp{ NULL };
	int pivot;
	int pivot_index;
	int left_wall = left;
	int right_wall = right;
        pivot = pArray[left];
        while (left < right)
        {
            while ((pArray[right] > pivot) && (left < right))
                right--;
            if (left != right) 
            {
                pArray[left] = pArray[right];
                left++; 
            }
            while ((pArray[left] < pivot) && (left < right))
                left++; 
            if (left != right) 
            {
                pArray[right] = pArray[left]; 
                right--; 
            }
        }
        pArray[left] = pivot; 
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
	int Array[length]{};
	for (int i{ 0 }; i < length; i++) {
		Array[i] = rand() % (END - START +1)+ START;
		std::cout << Array[i] << "\t";
	}
	QS(0, length-1, Array);
	std::cout << "\n\n\n\n";
	for (int i{ 0 }; i < length; i++) {
		std::cout << Array[i] << "\t";
	}
	
}