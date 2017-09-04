/*
 * Name: Victor Fong
 * TA: TODO: find and fix TA
 * Lab: TODO: ^
 * Date created: 9/3/17
 */

#include <stdio.h>


/*
 * Write a function that will make a copy of the values from one array to another array.
 */
void arrayCopy(int *fromArray, int *toArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        toArray[i] = fromArray[i];
    }
}


/*
 * Write your own function that will sort an array in ascending order.
 * You may use whatever sorting algorithm you wish.
 */
void myFavoriteSort(int arr[], int size)
{

}


/*
* Write your own function that will perform a linear search on the unsorted array.
* The function is to �return� two values.
* The first should be the position in the array where the value was found or -1 if the value was not found.
* The second is the number of comparisons needed to determine if/where the value is located in the array.
*/
int linSearch(int arr[], int size, int target, int* numComparisons)
{
    ++numComparisons;
    return target;
}


/*
 * Write your own function that will perform a binary search on the sorted array.
 * The function is to �return� two values.
 * The first should be the position in the array where the value was found or -1 if the value was not found.
 * The second is the number of comparisons needed to determine if/where the value is located in the array.
 */
int binSearch(int arr[], int size, int target, int* numComparisons)
{

}


int main()
{
    int i = 0;

    char buffWord = ' ';

    /*Read in integer input from standard input and store these values into an array.
     * The values will have a �terminal value� of -999. So you read in these values in a loop that stops when the value of -999 is read in.
     * The use of informative prompts is required for full credit.
     * You may not assume how many numeric values are given on each line.
     * The use of a scanf() with the following form is expected to read in the values.
     */
    printf("Welcome to the wonderful sorting program for CS 211!\n"
                   "To begin. please enter as many values as you would like, followed by the value -999: ");

    scanf("%c");



    /*
     * make a copy of the integer array using the arrayCopy() function described above.
     */


    /*
     * Sort one of the arrays (using the sort() function described above).
     * Leave the other array unsorted.
     */





    /*
     * Read in integer input from standard input (again, the use of scanf() is expected)
     * and for each of the values read in search for the value using both search functions described above
     * (i.e. for each value read in, perform a linear search on the unsorted array and perform a binary search on the sorted array).
     * Using the information returned/sent back from the search functions, print out from main():
     *
     *  1. Whether the value was found or not found,
     *  2. The number of comparisons needed to determine whether the value exists or not in each algorithm,
     *  3. And the location in the array where the number is located (if the value does exist in the array)
     */

    return 0;
}