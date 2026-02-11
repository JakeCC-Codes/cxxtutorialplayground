// https://www.youtube.com/watch?v=ZzaPdXTrSb8&t=2s
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

struct Vectori{int x; int y; Vectori(int x=0, int y=0):x(x),y(y){}};

Vectori swapIntVars(int v1, int v2) {
    int v3 = v1;
    v1 = v2;
    v2 = v3;
    return { v1, v2 };
}

int main(void) {
    char skip = '\0';
    std::cout << "Press any key, except 's', to continue..." << '\n';
    std::cin.get(skip);
    if (skip != 's') {
        // Problem 1: Swap the contents of 2 Variables
        int var1 = 3;
        int var2 = 6;

        Vectori result = swapIntVars(var1, var2);

        
        std::cout << '\n' << "Problem 1: Swap the contents of 2 Variables" << '\n';
        std::cout << "var1_old: " << var1 << '\n';
        std::cout << "var2_old: " << var2 << '\n';
        std::cout << "var1_new: " << result.x << '\n';
        std::cout << "var2_new: " << result.y << '\n';

        // Problem 2: Implement the mathematical problem, z = (x + 10) / 3y, where x=10 and y=5
        double x = 10;
        double y = 5;
        double z = (x + 10) / (3*y);

        std::cout << '\n' << "Problem 2: ";
        std::cout << "What's z = ([" << x << "] + 10) / (3[" << y << "])?" << '\n';
        std::cout << "Answer = " << z << '\n';

        // Problem 3: Calculate Tax
        double sales = 95000;
        double stateTaxRate = 4;
        double countryTaxRate = 2;

        double stateTax = sales * stateTaxRate * 0.01;
        double countryTax = sales * countryTaxRate * 0.01;
        double salesWStateTax = sales - stateTax;
        double salesWCountryTax = sales - countryTax;
        double taxTotal = stateTax + countryTax;
        double salesTaxTotal = sales - (stateTax + countryTax);

        std::cout << '\n' << "Problem 3: Calculate Tax, stateTax = " << stateTaxRate << "% " << "and countryTax = " << countryTaxRate << "%" << '\n';
        std::cout << "Sales: $" << sales << '\n';
        std::cout << "State Tax: $" << stateTax << '\n';
        std::cout << "Country Tax: $" << countryTax << '\n';
        std::cout << "Tax Total: $" << taxTotal << '\n';
        std::cout << "Sales with State Tax: $" << salesWStateTax << '\n';
        std::cout << "Sales with Country Tax: $" << salesWCountryTax << '\n';
        std::cout << "Sales Tax Total: $" << salesTaxTotal << '\n';

        // Problem 4: Convert Fahrenheit to Celsius
        double fDegree = 0.0;
        double cDegree = 0.0;

        std::cout << '\n' << "Problem 4: Convert Fahrenheit to Celsius" << '\n';
        std::cout << '\n';
        std::cout << "Enter degrees in Fahrenheit: ";
        std::cin >> fDegree;
        std::cout << '\n';
        
        cDegree = (fDegree - 32) / 1.8;

        std::cout << "Degrees Fahrenheit: " << fDegree << '\370' << 'F' << '\n';
        std::cout << "Degrees Celsius: " << cDegree << '\370' << 'C' << '\n';

        // Problem 5: Calculate the Area of a Circle
        double radius = 0.0;
        double area = 0.0;
        const double PI = 3.1415926535897932384626433832795;
        const double PI_TWO = 6.283185307179586476925286766559;
        const double PI_HALF = 1.5707963267948966192313216916398;
        const double PI_QUARTER = 0.78539816339744830961566084581988;

        std::cout << '\n' << "Problem 5: Calculate the Area of a Circle" << '\n';
        std::cout << '\n';
        std::cout << "Enter Circle's Radius in centimetres: ";
        std::cin >> radius;
        std::cout << '\n';

        area = PI * std::pow(radius, 2);

        std::cout << "Circle Area: " << area << "cm^2" << '\n';
    }
    // Problem 6: Dice Rolling Minigame
    short randGuess = 0;
    std::srand(std::time(nullptr));
    short randDice1 = (rand() % 6) + 1;
    short randDice2 = (rand() % 6) + 1;

    std::cout << '\n' << "Problem 6: Dice Rolling Minigame" << '\n';
    std::cout << "You are about to play an EPIC dice rolling minigame..." << '\n';
    std::cout << "You must guess a value between 1 - 6" << '\n';
    std::cout << "If your value matches the value of one dice, you are awarded one point. If your value matches the value of both dice you win the game!" << '\n';
    std::cout << '\n';
    std::cout << "Enter your guess [1 - 6]: ";
    std::cin >> randGuess; randGuess = (abs(randGuess) % 7);
    std::cout << '\n';

    std::cout << "Your Guess: " << randGuess << '\n';
    std::cout << "Dice 1: " << randDice1 << '\n';
    std::cout << "Dice 2: " << randDice2 << '\n';
    std::cout << '\n';

    if (randGuess == randDice1 || randGuess == randDice2) {
        if (randGuess == randDice1 && randGuess == randDice2) {
            std::cout << "You Win!" << '\n';
        } else {
            std::cout << "Nice going but try to match both numbers to win the game.\nYou were awared 1 point!" << '\n';
        }
    } else {
        std::cout << "You Lose!" << '\n';
    }

    std::cout << '\n' << "Type any character to close the program..." << '\n';
    std::cin >> skip;
    

    return 0;
}