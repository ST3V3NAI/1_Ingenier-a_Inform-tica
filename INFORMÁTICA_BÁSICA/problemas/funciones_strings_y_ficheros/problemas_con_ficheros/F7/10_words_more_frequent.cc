#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cctype>

int main() {
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");

    if (!input || !output) {
        std::cerr << "Error al abrir los archivos." << std::endl;
        return 1;
    }

    std::vector<std::pair<std::string, int>> words;
    std::string word;

    while (input >> word) {
        for (char& c : word) c = std::tolower(c);
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());

        bool found = false;
        for (auto& wf : words) {
            if (wf.first == word) {
                wf.second++;
                found = true;
                break;
            }
        }

        if (!found && !word.empty()) {
            words.push_back({word, 1});
        }
    }

    std::sort(words.begin(), words.end(), [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
        return b.second < a.second;
    });

    for (int i = 0; i < 10 && i < words.size(); ++i) {
        output << words[i].first << ": " << words[i].second << "\n";
    }

    return 0;
}
