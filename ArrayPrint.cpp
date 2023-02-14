#include <iostream>

int ArrayPrint() {

//    char str[] = "        ABCD      ABCD       ABCD        ABCD        ";
//    char str[] = "        ABCD      ABCD       ABCD        ABCD";
//    char str[] = "ABCD      ABCD       1234        ABCD        ";
//    char str[] = "ABCD        ";
//    char str[] = "ABCD";
//    char str[] = "                ABCD";
//    char str[] = "A        ";
//    char str[] = "A";
//    char str[] = "";
//    char str[] = "A B C D";
//    char str[] = "A B C D ";
//    char str[] = "A B C D";
//    char str[] = "A ";
//    char str[] = " A ";
//    char str[] = "A A";
//    char str[] = "A A";
//    char str[] = "A A ";
//    char str[] = " A A";
    char str[] = " ";


    int n = 0;

    while (str[n] != '\0')
    {
        while (str[n] == ' ')
        {
            std::cout << str[n];
            n++;
        }
        while (str[n] != ' ' && str[n] != '\0')
        {
            std::cout << str[n]  << ' ';

            std::cout << (int)str[n]  << "   ";
            n++;
        }
        std::cout << str[n]  << ' ';

        std::cout << (int)str[n]  << "   ";
    }

    return 0;
}
