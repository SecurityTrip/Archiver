#include <cstring> // Для функции strcpy
#include <iostream> // Для тестирования

class TxtFile {
    char filename[256];
public:
    TxtFile(const char* filename) {
        strncpy_s(this->filename, sizeof(this->filename), filename, _TRUNCATE);
    }

    void printFilename() const {
        std::cout << "Filename: " << filename << std::endl;
    }
};