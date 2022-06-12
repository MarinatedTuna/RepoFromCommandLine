#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int arr[5];
	int arr1[5] = {42, 105, 8};
	int arr2[5]; //uninitialized
	int* arr3 = new int[5];
	
	int* arrPtr;
	arrPtr = arr;
	
	for(int i = 0; i < 5; ++i){
	    arr[i] = i + 1;
	}
	
	cout << arr[4] << endl;
	cout << arr << endl; //same as &arr[0]
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;
	
	for(int i = 0; i < 5; ++i){
	    cout << arr1[i] << " ";	
	}
	cout << endl;
	
	cout << arr1[10] << endl << endl;
	
	cout << "Size of int, double, char, bool" << endl << endl;
	
	cout << sizeof(int) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(bool) << endl;
	
	cout << endl << "Array pointer to arr\n\n";
	
	cout << *arrPtr << endl;
	cout << *(arrPtr + 1) << endl;
	cout << *(arrPtr + 2) << endl;
	
	arrPtr = arr1;
	
	cout << endl << "Array pointer to arr1\n\n";
	
	cout << *arrPtr << endl;
	cout << *(arrPtr + 1) << endl;
	cout << *(arrPtr + 2) << endl;
	
	cout << "Stack allocated vs Heap allocated array\n\n";
	
	cout << arr2[20]<< endl; //stack 
	cout << arr3[20] << endl; //heap
	
	//arr2 causes undefined behavior
	//arr3 grabs free memory and sets to 0
}
