#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double waktu;
    int v;
    int s;
    double srad;

    cin >> v;
    cin >> s;
    srad = s * (3.14 / 180);
    waktu = 2 * (v * srad) / 10;
    cout << waktu << endl;
    return 0;
}

