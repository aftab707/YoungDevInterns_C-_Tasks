#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile(const string &fileName) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cout << "Error: Unable to open file " << fileName << endl;
        return;
    }

    cout << "Contents of " << fileName << ":" << endl;
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
}

void writeFile(const string &fileName) {
    ofstream outputFile(fileName);
    if (!outputFile) {
        cout << "Error: Unable to create file " << fileName << endl;
        return;
    }

    cout << "Enter text to write to " << fileName << " (type 'END' to finish):" << endl;
    string input;
    while (true) {
        getline(cin, input);
        if (input == "END") break;
        outputFile << input << endl;
    }

    outputFile.close();
    cout << "Data written to " << fileName << " successfully." << endl;
}

int main() {
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    // Read from the input file
    readFile(inputFileName);

    // Write to the output file
    writeFile(outputFileName);

    return 0;
}
