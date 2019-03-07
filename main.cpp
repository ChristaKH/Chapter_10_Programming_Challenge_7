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
 */
#include <iostream>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}