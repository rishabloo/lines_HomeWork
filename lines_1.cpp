#include<iostream>
#include<string>

int main(int argc, char** argv)
{
    std::string nameString;
    std::cout << "Введите имя: ";
    std::cin >> nameString;
    
    std::string surnameString;
    std::cout << "Введите фамилию: ";
    std::cin >> surnameString;

    std::string helloString = "Приветик, ";
    
    std::cout << helloString + nameString << " " << surnameString <<std::endl;


    return 0;
}