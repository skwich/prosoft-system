#include <iostream>
#include <string>

using namespace std;

int main()
{
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);

    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);

        for (char c : t)
        {
            c = toupper(c);
            if ('A' <= c && c <= 'Z')
            {
                int indexOfAsciiChar = (c - 'A') * l;
                cout << row.substr(indexOfAsciiChar, l);
                continue;
            }
            cout << row.substr(row.length() - l, l);
        }
        cout << endl;
    }
}
