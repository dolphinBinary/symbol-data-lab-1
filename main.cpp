#include <iostream>

int main() {
//    char checkWord[] = "abcd";
//    char stringWords[] = "abcd aaaa abcd abcd asfg";
//    char checkWord[] = "asdg";
//    char stringWords[] = "hsdf sdfh jghj dfgf sgfh";
//    char checkWord[] = "asdg";
//    char stringWords[] = "sdff aaaa sdff sdfg sfdg";
//    char checkWord[] = "asdg";
//    char stringWords[] = "sdfg agfg sdfg sdfg sfdg";
//    char checkWord[] = "asdg";
//    char stringWords[] = "sfss sfdg sgf sdfg avds";
//    char checkWord[] = "asdg";
//    char stringWords[] = "asdg aggd asdg afgg asfg";
//    char checkWord[] = "a";
//    char stringWords[] = "aggd aaaa fhdj fghj jfghj";
//    char checkWord[] = "b";
//    char stringWords[] = "aggd aaaa vjkjk hgjj fhjj";
//    char checkWord[] = "c";
//    char stringWords[] = "aggd aaaa aggd aggd aggd";
//    char checkWord[] = "d";
//    char stringWords[] = "aggd aaaa about aggd aggd";
//    char checkWord[] = "asdf";
//    char stringWords[] = "aggd aaaa aggd aggd aggd";
    char checkWord[] = "test";
    char stringWords[] = "something aaaa about computer science";

    int lenCheckWord = 0;

    while (checkWord[lenCheckWord] != '\0')
        ++lenCheckWord;
    ++lenCheckWord;

    int wordCounter = 0;

    int begin = 0;
    int end;

    while (stringWords[begin] != '\0') {
        while (stringWords[begin] == ' ')
            ++begin;
        end = begin + 1;
        while (stringWords[end] != ' ' && stringWords[end] != '\0')
            ++end;

        // слово между begin и end
        bool isLetterInWord = false;
        for (int i = begin; (i < end) && (!isLetterInWord); ++i)
            for (int j = 0; j < lenCheckWord; ++j)
                if (stringWords[i] == checkWord[j]) {
                    isLetterInWord = true;
                    break;
                }
        if (isLetterInWord) {
            wordCounter += 1;
            std::cout << "yes\n";
        } else
            std::cout << "nope\n";
        begin = end;

        std::cout << "\n";

    }
    std::cout << "words contains check word " << wordCounter;

    return 0;
}