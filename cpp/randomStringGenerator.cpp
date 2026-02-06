#include <iostream>
#include <random>
using namespace std;

int main() {
    const string CHAR_POOL = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz/0*1-2+3!4@5#6$7%8&9";
    int length;

    cout << "Enter length of code: ";
    cin >> length;

    random_device rd;  // Random device
    mt19937 generator(rd());  // Mersenne Twister RNG
    uniform_int_distribution<> distrib(0, CHAR_POOL.size() - 1);

    string code = "";
    for (int i = 0; i < length; ++i) {
        code += CHAR_POOL[distrib(generator)];
    }

    cout << "Generated code: " << code << endl;
    return 0;
}
