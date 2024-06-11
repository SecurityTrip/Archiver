#include <iostream>
#include "file.cpp"


int main() {
    TxtFile myfile("example.txt");
    myfile.printFilename();
    return 0;
}