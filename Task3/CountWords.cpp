#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int countWords(const std::string &filename)
{
    std::ifstream file(filename);
    if (!file)
    {
        std::cout << "Error opening file: " << filename << std::endl;
        return -1;
    }

    std::string line;
    int wordCount = 0;

    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string word;

        while (ss >> word)
        {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main()
{
    std::string filename;

    std::cout << "Enter the file name: ";
    std::cin >> filename;

    int totalWords = countWords(filename);
    if (totalWords >= 0)
    {
        std::cout << "Total word count: " << totalWords << std::endl;
    }

    return 0;
}
