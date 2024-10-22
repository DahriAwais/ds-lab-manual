#include <iostream>
using namespace std;

class Average {
public:
    // Function to calculate and display the average
    void calculateAverage(float num1, float num2, float num3) {
        float avg = (num1 + num2 + num3) / 3;
        cout << "The average of the three numbers is: " << avg << endl;
    }
};

int main() {
    float num1, num2, num3;

    // Taking input from the user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Creating an object of the Average class
    Average avgObj;

    // Calling the function to calculate and display the average
    avgObj.calculateAverage(num1, num2, num3);

    return 0;
}
