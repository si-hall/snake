#include <iostream>
#include <Windows.h>

void Draw(COORD position, std::string sym)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);;
        std::cout << sym;        
    }

int main()
    {
        std::string sym = "*";
        std::string sym2 = "#";
        COORD position = {1,5}; //позиция x и y
        Draw(position,sym);
        std:: cin >> sym;
    }
