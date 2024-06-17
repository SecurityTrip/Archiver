#include <iostream>
#include <Windows.h>
#include "file.cpp"



int main() {
    std::cout << "Enter path to file";
    std::string path;
    std::cin >> path;
    TxtFile myfile(path);
    myfile.printFilename();
    
    return 0;
}