#include <iostream>
#include "money.h"
#include "money.cpp"

int main(){
    int amount1, amount2 = readFile();
    addAmount(cina1, amount1);
    roundUp(cina1);
    addAmount(cina2, amount2);
    roundUp(cina2);
    std::cout << "Пакет молока 600мл: " << cina1.hrn;
    return 0;
}