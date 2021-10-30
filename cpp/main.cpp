#include <iostream>
#include <map>
#include <string>

std::map<std::string, std::string> CONVERSIONTABLE {
    // uppercase
    {"A" , "А"},
    {"B" , "Б"},
    {"C" , "Џ"},
    {"D" , "Д"},
    {"E" , "Е"},
    {"F" , "Ф"},
    {"G" , "Г"},
    {"H" , "Х"},
    {"I" , "И"},
    {"J" , "Ј"},
    {"K" , "К"},
    {"L" , "Л"},
    {"M" , "М"},
    {"N" , "Н"},
    {"O" , "О"},
    {"P" , "П"},
    {"Q" , "Љ"},
    {"R" , "Р"},
    {"S" , "С"},
    {"T" , "Т"},
    {"U" , "У"},
    {"V" , "В"},
    {"W" , "В"},
    {"X" , "Џ"},
    {"Y" , "З"},
    {"Z" , "Ѕ"},

    // lowercase
    {"a" , "а"},
    {"b" , "б"},
    {"c" , "ц"},
    {"d" , "д"},
    {"e" , "е"},
    {"f" , "ф"},
    {"g" , "г"},
    {"h" , "х"},
    {"i" , "и"},
    {"j" , "ј"},
    {"k" , "к"},
    {"l" , "л"},
    {"m" , "м"},
    {"n" , "н"},
    {"o" , "о"},
    {"p" , "п"},
    {"q" , "љ"},
    {"r" , "р"},
    {"s" , "с"},
    {"t" , "т"},
    {"u" , "у"},
    {"v" , "в"},
    {"w" , "њ"},
    {"x" , "џ"},
    {"y" , "з"},
    {"z" , "ѕ"}
};

int main() {
    std::string input;
    std::cin >> input;

    for (int i = 1; i < input.length(); i++) {
        //input[i] = (CONVERSIONTABLE[input[i]] || input[i]);
    }
    std::cout << "\nResult: " + input + "\n";
    std::cout << CONVERSIONTABLE["A"];

    return 0;
}
