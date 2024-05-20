#include <iostream>
#include <iomanip>

using namespace std;

class FilterRC
{
public:
    FilterRC(float R, float C) : resistor(R), capacitor(C)
    {
    }

    float frequencia()
    {
        return 1 / (2 * pi * resistor * capacitor);
    }

private:
    float resistor, capacitor;
    const float pi = 3.141592;
};

int main()
{
    FilterRC filterl(1500.0, 10.0E-9);
    float freq;

    cout << fixed << setprecision(2);

    freq = filterl.frequencia();
    cout << " Frequencia: " << freq << " Hz";

    cout << "\n Fim do Programa." << endl;

    return 0;
}