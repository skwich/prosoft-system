#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

string convertToLowercase(string& str)
{
    string result;
    for (auto ch : str)
        result += tolower(ch);
    return result;
}

int main()
{
    map<string, string> map{};
    int n; // Number of elements which make up the association table.
    cin >> n; cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q; cin.ignore();
    for (int i = 0; i < n; i++) {
        string ext; // file extension
        string mt; // MIME type.
        cin >> ext >> mt; cin.ignore();

        ext = convertToLowercase(ext);
        map.insert(make_pair(ext, mt));
    }

    for (int i = 0; i < q; i++) {
        string fname;
        getline(cin, fname); // One file name per line.
        
        fname = convertToLowercase(fname);
        if (fname.find_last_of('.') != string::npos)
        {
            string ext{ fname.substr(fname.rfind('.') + 1, -1) };
            if (map.contains(ext))
            {
                cout << map.at(ext) << endl;
                continue;
            }
        }

        cout << "UNKNOWN" << endl;
    }
}
