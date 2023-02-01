#include <iostream>
using namespace std;
main()
{
    freopen("input.txt", "r", stdin); // this is used for specific file
    freopen("output.txt", "w", stdout);
    string s;
    // cin >> s; //this input takes only 1 word
    getline(cin, s); // this will take a line from input file
    cout << s;
    return 0;
}
