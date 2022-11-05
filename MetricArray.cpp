// Liam O'Kelley
// CS231-003
// MetricArray.cpp
// Takes 10 int values entered by the user and stores them into an array, then determines the smallest and largest values from them, as well as the average of all of the numbers. It then prints out the results
// Due on 2/9/20

#include <iostream>
using namespace std;

int main() {
    int numbers[10], n = 10, i, maximum, minimum;
    float sum = 0.0, avg;
    
    //Prints a welcome message
    cout << "welcome to the Metric Array" << endl;

    //Takes user entered data and puts it into an array, gives a message if the number is below 1 or above 100 and makes them reenter the number
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Enter number: ";
        cin >> numbers[i];
        while (numbers[i] > 100 || numbers[i] <= 0) {
            cout << "You can only enter numbers between 1 and 100." << endl;
            cout << "Enter the number again: ";
            cin >> numbers[i];
        }
        //Calculates the sum of the numbers
        sum += numbers[i];
    }
    
    //Determines the biggest number in the array
    maximum = numbers[0];
    for (i = 0; i < n; i++)
    {
        if (maximum < numbers[i])
            maximum = numbers[i];
    }
    
    //Determines the smalles number in the array
    minimum = numbers[0];
    for (i = 0; i < n; i++)
    {
        if (minimum > numbers[i])
            minimum = numbers[i];
    }

    //Determines the average of the numbers in the array
    avg = sum / n;

    //Outputs all of the needed information
    cout << "The smallest number is: " << minimum << endl;
    cout << "The largest number is: " << maximum << endl;
    cout << "The average of the numbers is: " << avg << endl;
}