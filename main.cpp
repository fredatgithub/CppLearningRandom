#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <iostream>
using namespace std;

int main() {
    const auto elapsedSeconds = time(nullptr); // number of seconds since Jan 1 1970
    srand(elapsedSeconds);
    constexpr int upperLimit = 10;
    cout << "Random number between 0 and " << upperLimit - 1 << ": ";
    for (int i = 0; i < 15; i++) {
        const int number = rand() % upperLimit;
        cout << number << " ";
    }
    cout << endl;

    constexpr short maxValue = 6;
    constexpr short minValue = 1;
    const short des1 = rand() % (maxValue - minValue + 1) + minValue;
    cout << "Random number between " << minValue << " and " << maxValue << ": " << des1 << endl;

    // utilisation C++ random library
    // 1) Source de hasard (non déterministe si dispo)
    std::random_device rd;

    // 2) Générateur pseudo-aléatoire (Mersenne Twister)
    //std::mt19937 gen(rd()); // ou seed fixe: std::mt19937 gen(12345); for 32 bits
    std::mt19937_64 gen(rd()); // for 64 bits

    // 3) Distributions
    std::uniform_int_distribution<int> distInt(0, 9);      // entier dans [0, 9]
    std::uniform_real_distribution<double> distReal(0.0, 1.0); // réel dans [0.0, 1.0)

    // Utilisation
    const int n = distInt(gen);
    const double x = distReal(gen);

    std::cout << "Entier [0,9]: " << n << "\n";
    std::cout << "Reel [0,1): " << x << "\n";
    return 0;
}