#include <iostream>
#include <fstream>
#include <string>

void replaceOccurrences(std::string &content, const std::string &s1, const std::string &s2) {
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
        pos += s2.length();
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be an empty string.\n";
        return 1;
    }
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Could not open file " << filename << "\n";
        return 1;
    }
    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();
    replaceOccurrences(content, s1, s2);
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Could not create output file.\n";
        return 1;
    }
    outputFile << content;
    outputFile.close();
    return 0;
}
