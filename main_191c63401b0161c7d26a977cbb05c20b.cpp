#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS helyett N_ELEMEMTS
    std::cout << '1-100 ertekek duplazasa' // pontos vesszo es std::endl hianya
    for (int i = 0;) //hianyos for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //rosszul haszanlt for ciklus
    {
        std::cout << "Ertek:" // kiirando ertekek hainya, std::endl es pontosvesszo hianya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //hianyzik a pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
