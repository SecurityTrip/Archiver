#include <iostream>
#include <string>

class TxtFile {
    std::string path;
    std::string filename;
public:
    TxtFile(std::string in_path) : path(in_path) {
        size_t pos = in_path.find_last_of("\\/");
        if (pos != std::string::npos) {
            filename = in_path.substr(pos + 1);
        }
        else {
            filename = in_path; // Если в пути нет разделителя, весь путь считается именем файла
        }
    }

    //C:\Users\Lysov\Desktop\Projects\Отчеты\Важность Soft Skills для Современного Специалиста Лысов ИД.docx

    void printFilename() const {
        std::cout << "Filename: " << filename << std::endl;
    }
};