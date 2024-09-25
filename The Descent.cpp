#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (1) {
        int highestMountainIndex{};
        int highestMountainHeight{};
        for (int i = 0; i < 8; i++) {
            int mountain_h;
            cin >> mountain_h; cin.ignore();

            if(highestMountainHeight < mountain_h)
            {
                highestMountainIndex = i;
                highestMountainHeight = mountain_h;
            }
        }

        cout << highestMountainIndex << endl;
    }
}
