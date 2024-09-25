#include <iostream>

using namespace std;

int main()
{
    int surface_n;
    cin >> surface_n; cin.ignore();
    for (int i = 0; i < surface_n; i++) {
        int land_x;
        int land_y;
        cin >> land_x >> land_y; cin.ignore();
    }

    while (1) {
        int x;
        int y;
        int h_speed;
        int v_speed;
        int fuel;
        int rotate;
        int power;
        cin >> x >> y >> h_speed >> v_speed >> fuel >> rotate >> power; cin.ignore();

        if(v_speed >= -40 && power < 4)
            power++;
        else
            power--;

        cout << "0 " << power << endl;
    }
}
