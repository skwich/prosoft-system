#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    vector<int> temperatures{ 0 };
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t; cin.ignore();
        temperatures.push_back(t);
    }

    if(temperatures.size() > 1)
    {
        sort(temperatures.begin(), temperatures.end());

        auto it = find(temperatures.begin(), temperatures.end(), 0);
        int indexOfZero { static_cast<int>(it - temperatures.begin()) };

        if(indexOfZero == 0)
            cout << temperatures[indexOfZero + 1] << endl;
        else if(indexOfZero == temperatures.size() - 1)
            cout << temperatures[indexOfZero - 1] << endl;
        else
        {
            int leftClosestTemperature = temperatures[indexOfZero - 1];
            int rightClosestTemperature = temperatures[indexOfZero + 1];
            if(abs(leftClosestTemperature) >= rightClosestTemperature)
                cout << rightClosestTemperature << endl;
            else
                cout << leftClosestTemperature << endl;
        }
    }
    else
        cout << "0" << endl;
}
