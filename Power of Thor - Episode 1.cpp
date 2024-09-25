#include <iostream>

using namespace std;

int main()
{
    int light_x;
    int light_y;
    int initial_tx;
    int initial_ty;
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    while (1) {
        int remaining_turns;
        cin >> remaining_turns; cin.ignore();

        string direction{};

        if(light_y < initial_ty && initial_ty >= 0)
        {
            direction += 'N';
            initial_ty--;
        }
        else if(light_y > initial_ty && initial_ty < 18)
        {
            direction += 'S';
            initial_ty++;
        }

        if(light_x > initial_tx && initial_tx >= 0)
        {
            direction += 'E';
            initial_tx++;
        }
        else if(light_x < initial_tx && initial_tx < 40)
        {
            direction += 'W';
            initial_tx--;
        }

        cout << direction << endl;
    }
}
