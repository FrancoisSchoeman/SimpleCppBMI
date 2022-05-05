#include <iostream>
using namespace std;

struct BMI {
    float weight;
    float height;
    float bmi;
};

// Prompt and return user's weight and height
BMI getData(BMI bmi);

// Calculate and return user's BMI
void calcBMI(BMI & bmi);

// Display user's BMI
void displayFitnessResults(const BMI bmi);

int main(){
    BMI bmi;

    bmi = getData(bmi);
    calcBMI(bmi);
    displayFitnessResults(bmi);

    return 0;
}

BMI getData(BMI bmi){
    cout << "Enter your weight in kilograms: ";
    cin >> bmi.weight;
    cout << "Enter your height in meters: ";
    cin >> bmi.height;

    return bmi;
}

void calcBMI(BMI & bmi){
    bmi.bmi = bmi.weight / (bmi.height * bmi.height);
}

void displayFitnessResults(const BMI bmi){
    cout.setf(ios::fixed);
    cout.precision(1);

    cout << "\nYour BMI is: " << bmi.bmi << endl;
    if (bmi.bmi < 18.5)
        cout << "You are underweight." << endl;
    else if (bmi.bmi < 25)
        cout << "You are normal weight." << endl;
    else if (bmi.bmi < 30)
        cout << "You are overweight." << endl;
    else
        cout << "You are obese." << endl;
}