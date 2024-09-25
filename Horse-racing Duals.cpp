#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_STRENGHT 10'000'000

using namespace std;

int main()
{
    vector<int> strenghtEachHorse{};
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int strenght;
        cin >> strenght; cin.ignore();
        strenghtEachHorse.push_back(strenght);
    }

    sort(strenghtEachHorse.begin(), strenghtEachHorse.end());

    int result{ MAX_STRENGHT };
    for(int i = 0; i < strenghtEachHorse.size(); i++)
    {
        int difference = strenghtEachHorse[i+1] - strenghtEachHorse[i];
        if(difference >= 0 && difference < result)
            result = difference;
    }

    cout << result << endl;
}
