#include <iostream>
#include "money.h"

int readFile(){
    int hrn, amount1, amount2;
    short kop;
    FILE *my_file;
    my_file = fopen("D:/Labs/OOP/Lab1/prices.txt", "r+t");
    fseek(my_file, 0L, SEEK_SET);
    fscanf(my_file, "%d %hi %d", hrn, kop, amount1);
    cina1.setHrn(hrn);
    cina1.setKop(kop);
    fscanf(my_file, "%d %hi %d", hrn, kop, amount2);
    cina2.setHrn(hrn);
    cina2.setKop(kop);
    fclose(my_file);
    return amount1, amount2;
}
void addAmount(money cina, int amount){
    int hrn = cina.getHrn();
    short kop = cina.getKop();
    hrn = hrn*amount;
    kop = kop*amount;
    if(kop<=100){
        kop = kop % 100;
        hrn =+ kop/100;
    }
    cina.setHrn(hrn);
    cina.setKop(kop);
}
void roundUp(money cina){
    int hrn = cina.getHrn();
    short kop = cina.getKop();
    if(kop % 10 > 4){
        if(kop > 90){
            kop = 0;
            hrn++;
        }
        else{
            kop -= kop % 10;
            kop += 10;
        }
    }
    else
        kop -= kop % 10;
    cina.setHrn(hrn);
    cina.setKop(kop);
}