/**
 * @author: Christa Hatch
 * @version: 1.0
 * @Course: CS 151 - Advanced C++ Programming
 * @Date: 03/06/19
 *
 * Problem Statement: Movie Statistics - Write a program that can be used to gather statistical
 * data about the number of movies college students see in a month. The program should ask the user
 * how many students were surveyed and dynamically allocate an array of that size. The program should
 * then calculate the average, median, and mode of the values entered.
 *
 * Algorithm:
 *  Methods:
 *      - average(int[] arr*, int size*): calculates the average of the values in an array
 *          - Create int [total] and set to 0
 *          - Create double [average] and set to 0
 *          - for int [i] = 0 till [size]
 *              - add int array value at index [i] to [total]
 *          - Set [average] equal to [total] divided by size
 *          -return [average]
 *      - median(int[] arr*, int size): returns the middle value of the array
 *          - use sort() to sort array
 *          - Create int [index]
 *          - Set [index] equal to size/2 - 1
 *          - If [size] is 1, return value at array index 1
 *          - Else, return the value of the array at index [index]
 *      - sort(int[] arr*, int size*): sorts the entered array from smallest value to biggest value
 *          - Create int [temp] and set to 0
 *          - Create bool [sorted] and set equal to true
 *          - do-while [sorted] is true
 *              - Set [sorted] to true
 *              -for int [i] = 0 till [size]- 1
 *                  -if value of [arr] at index [i] is greater than value of [arr] at
 *                  index [i] + 1
 *                      - Use [temp] to switch value positions
 *                      - Set [sorted] to false
 *      - mode(int[] arr*, int size*): returns the mode value in the set of values
 *          - Create int [largest] and set to 0
 *          - for int [i] = 0 till [size]
 *              - if value of [arr] at index [i] is greater than [largest]
 *                  - Set the value of [largest] to the value at idex [i] of [arr]
 *          - Return the value of [largest]
 *   Main:
 *      - Create int [numStudents]
 *      - Create int array [numMovies]
 *      - Ask user how many students were surveyed and store in [numStudents]
 *      - For int [i] = 0 till [numStudents]
 *          - Ask user the number of movies seen by student [i] + 1
 *          - If entered value is negative, make positive
 *          - Store value in [numMovies] at index [i]
 *      - Use average() to print out the average
 *      - Use mode() to print out the mode
 *      - Use median() to print out the mode
 */


#include <iostream>

using namespace std;

double average(int*, int*);
int median(int*, int*);
void sort(int*, int* );
int mode(int*, int*);

int main() {
    return 0;
}

double average(int* arr, int* size ){
    int total = 0;
    double average = 0;

    for(int i = 0; i < *size; i++){
        total += *(arr + i);
    }

    average = (double)total/ *size;
    return average;
}

void sort(int* arr, int* size){
    int temp = *(arr);
    bool sorted = true;
    do{
        sorted = true;
        for(int i = 0; i < (*size - 1); i++){
            if(*(arr + i) > *(arr + i + 1)){
                temp = *(arr + i);
                *(arr + i) = *(arr + i + 1);
                *(arr + i + 1) = temp;
                sorted = false;
            }
        }
    }while(sorted == false);
}

int median(int* arr, int* size){
    int medianIndex = 0;
    sort(arr, size);
    if(*size == 1){
        return *arr;
    } else if(*size % 2 == 0){
        medianIndex = (*size/2) - 1;
    } else{
        medianIndex = *size/2;
    }

    return *(arr + medianIndex);
}

int mode(int* arr, int* size){
    int largest = 0;
    for( int i = 0; i < *size; i++){
        if( *(arr + i) > largest){
            largest = *(arr + i);
        }
    }

    return largest;
}

