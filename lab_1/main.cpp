#include<iostream>
int main()
{
    setlocale(LC_ALL, "Rus");

    char char1 = 10;
    char char2 = 11;
    short short1 = 152; 
    short short2 = 1698;
    int int1 = 12588;
    int int2 = -1999;
    long long long_long1 = -1464648;
    long long long_long2 = 11876164646;
    unsigned int unsigned_int1 = 11545;
    unsigned int unsigned_int2 = 16844;

    char char1_ = -10;
    char char2_ = -11;

    float float1 = 1111;
    float float2 = 1222;
    double double1 = 15656565;
    double double2 = 178787878787875;

    bool bool1 = true;
    bool bool2 = false;

    std::cout << "Лабораторная рабаота №1\nПеременная - это именованная область памяти, которая хранит значение определённого типа данных." << std::endl;
    std::cout << "Типы данных (название типа, размер в байтах, мин. и макс. значения, пример арифм. операции):" << std::endl;
    std::cout << "1. Целочисленные:" << std::endl;
    std::cout << "- char, 1 байт, -128..127, char1 * char2 = " << char1 * char2 << std::endl;
    std::cout << "- short, 2 байта, -32768..32767, short1 - short2 = " << short1 - short2 << std::endl;
    std::cout << "- int, 4 байта, -2^31 .. 2^31-1, int1 + int2 = " << int1 + int2 << std::endl;
    std::cout << "- long long, 8 байт, -2^63 .. 2^63-1, long_long1 * long_long2 = " << long_long1 * long_long2 << std::endl;
    std::cout << "- unsigned int, 4 байт, 0 .. 2^32-1, unsigned_int1 / unsigned_int2 = " << unsigned_int1 / unsigned_int2 << std::endl;
    std::cout << "2. Символьные:" << std::endl;
    std::cout << "- char, 1 байт, -128..127, char1 % char2 = " << char1 % char2 << std::endl;
    std::cout << "3. Вещественные:" << std::endl;
    std::cout << "- float, 4 байта, 6-7 цифр, float1 + float2 = " << float1 + float2 << std::endl;
    std::cout << "- double, 8 байтов, 15-16 цифр, double1 * double2 = " << double1 * double2 << std::endl;
    std::cout << "4. Логический тип:" << std::endl;
    std::cout << "- bool, 1 байт, true/false, bool1 + bool2 = " << bool1 + bool2 << std::endl;
    //std::cout << "" << std::endl;

    return 0;
}
