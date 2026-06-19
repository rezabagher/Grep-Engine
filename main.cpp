#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream myfile("../input.txt");
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
                   if (word == "APPLE") {
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