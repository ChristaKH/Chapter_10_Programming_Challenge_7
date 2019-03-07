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
 *      - average(int[]*, int size*): calculates the average of the values in an array
 *          - Create int [total] and set to 0
 *          - Create double [average] and set to 0
 *          - for int [i] = 0 till [size]
 *              - add int array value at index [i] to [total]
 *          - Set [average] equal to [total] divided by size
 *          -return [average]
 */
#include <iostream>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}