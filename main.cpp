#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <word> <filename>" << std::endl;
        return 1;
    }
    std::string path = std::string("../") + argv[2];
    std::ifstream myfile(path);
    //cheking file is open or not
    if (!myfile.is_open()){
        std::cout << "Error opening file." << std::endl;
        return 1;
        }
    //looking for a certain word in a line
    std::string line;
    while (std::getline(myfile, line)){
        std::string word;
        for (size_t i = 0; i <= line.size(); i++) {
              if (i == line.size() || line[i] == ' ') {
                   if (word == argv[1]) {
                       std::cout << line << std::endl;
                        break;
                               }
                   word = "";
    } else {
        word += line[i];
    }}
   
        }

     myfile.close();
    return 0;
}