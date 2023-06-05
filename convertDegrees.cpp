// Problem: Convert a degree into Celsius, Fahrenheit and Kalvin.
#include <iostream>
#include <iomanip>
using namespace std;

void CelsiusToFahrenheit (int deg) {
    float F = ((deg*9)/5)+32;
    cout << "\n" << deg << "° in Fahrenheit is " << fixed << setprecision(2) << F << "°F \n";
}

void FahrenheitToCelsius (int deg) {
    float C = ((deg-32)*5)/9;
    cout << "\n" << deg << "° in Celsius is " << fixed << setprecision(2) << C << "°C \n";
}

void CelsiusToKelvin (int deg) {
    // ToCelsius(deg);
    float CK = deg + 273.15;
    cout << "\n" << deg << "°C in Kelvin is " << fixed << setprecision(2) << CK << "°K \n";
}

void FahrenheitToKelvin (int deg) {
    float FK = (deg-32)*5/9 + 273.15;
    cout << "\n" << deg << "°F in Kelvin is " << fixed << setprecision(2) << FK << "°K \n";
}

void KelvinToCelsius (int deg) {
    float KC = deg - 273.15;
    cout << "\n" << deg << "°K in Celsius is " << fixed << setprecision(2) << KC << "°C \n";
}

void KelvinToFahrenheit (int deg) {
    float KF = (((deg - 273.15)*9)/5) + 32;
    cout << "\n" << deg << "°K in Fahrenheit is " << fixed << setprecision(2) << KF << "°F \n";
}

int main() {
    float deg;
    int choice;
    while (true) {
        cout << "\nEnter the degree : ";
        cin >> deg;
        cout << "1. Convert Celsius to Fahrenheit \n"
             << "2. Convert Fahrenheit to Celsius \n"
             << "3. Convert Celsius to Kelvin \n"
             << "4. Convert Fahrenheit to Kelvin \n"
             << "5. Convert Kelvin to Celsius \n"
             << "6. Convert Kelvin to Fahrenheit \n"
             << "7. Exit from program \n"
             << "Enter the choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                CelsiusToFahrenheit (deg);
                break;
            case 2:
                FahrenheitToCelsius (deg);
                break;
            case 3:
                CelsiusToKelvin(deg);
                break;
            case 4:
                FahrenheitToKelvin (deg);
                break;
            case 5:
                KelvinToCelsius (deg);
                break;
            case 6:
                KelvinToFahrenheit (deg);
                break;
            case 7: 
                exit(0);
                break;
            default:
                cout << "Enter correct choice! \n";
                break;
        }
    }
    return 0;
}
