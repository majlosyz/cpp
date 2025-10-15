
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

class Sequence {
public:
    Sequence() = default;
    void add(char c) { seq.push_back(c); }
    void clear() { seq.clear(); }
    void print() const {
        for (char c : seq) std::cout << c;
        std::cout << std::endl;
    }
    void readFasta(const std::string& path) {
        clear();
        std::ifstream file(path);
        if (!file.is_open()) {
            std::cerr << "Could not open file: " << path << std::endl;
            return;
        }
        std::string line;
        while (std::getline(file, line)) {
            if (line.empty() || line[0] == '>') continue;
            for (char c : line) {
                if (!isspace(c)) seq.push_back(c);
            }
        }
        file.close();
    }
private:
    std::vector<char> seq;
};

int main() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Hello from C++ loop! Iteration: " << i + 1 << std::endl;
    }
    return 0;
}
