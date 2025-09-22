#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const long elapsedSeconds = time(nullptr); // number of seconds since Jan 1 1970
    srand(elapsedSeconds);
    constexpr int upperLimit = 10;
    cout << "Random number between 0 and " << upperLimit - 1 << ": ";
    for (int i = 0; i < 15; i++) {
        int number = rand() % upperLimit;
        cout << number << " ";
    }
    cout << endl;

    constexpr short maxValue = 6;
    constexpr short minValue = 1;
    short des1 = rand() % (maxValue - minValue + 1) + minValue;
    cout << "Random number between " << minValue << " and " << maxValue << ": " << des1 << endl;

    return 0;
}