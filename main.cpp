#include <iostream>

int main() {
    char checkWord[] = "test";
    char stringWords[] = "something words about computer science";

    int i = 0;
    int j = 0;

    // Проверяет на наличие букв контрольного слова внутри первого слова строки
    while (stringWords[i] != '\0')
    {
        while (stringWords[i] != ' ' && stringWords[i] != '\0')
        {
            while (checkWord[j] != ' ' && stringWords[i] != '\0')
            {
                if (checkWord[j] == stringWords[i])
                {
                    while(stringWords[i] != ' ' && stringWords[i] != '\0')
                    {
                        std::cout << stringWords[i];
                        i++;
                    }
                }
                j++;
            }
        }
    }

    return 0;
}