// #include <bits/stdc++.h> //for all headers
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // input from specific file=========
    ifstream input_file_variable;
    input_file_variable.open("input1.txt");
    int x;
    double y;
    input_file_variable >> x >> y;

    // Output to specific file======
    // variable declear
    // ofstream text1;
    // ofstream text2;
    // text1.open("output.txt");
    // text2.open("output2.txt");
    // text1 << "hello text1";
    // text2 << "Hello text2";
    cout << x << y << "\n";
    input_file_variable.close();
    return 0;
}
