#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

///ABANDONDED FOR NOW, DOING MATLAB INSTEAD

int main() {

    ///Load flight data
    fstream fin; //File Pointer
    fin.open("CatoPDF_Spring2023.csv", ios::in); // Open the Log File
    // Read the Data from the file
    // as String Vector
    vector<string> row;
    string line, word, temp;

    //Skip Headers
    for (int i=0; i<10; i++){
        getline(fin, line);
    }


    while (fin >> temp) {

        row.clear();

        // read an entire row and
        // store it in a string variable 'line'
        getline(fin, line);

        // used for breaking words
        stringstream s(line);

        // read every column data of a row and
        // store it in a string variable, 'word'
        while (getline(s, word, ', ')) {

            // add all the column data
            // of a row to a vector
            row.push_back(word);
        }

        // convert string to integer for comparision
        auto roll2 = stod(row[0]);
        ///Find the optimal parameters for models

    ///Determine Sensitivities

    return 0;
}
