#ifndef MONEY_H
#define MONEY_H

struct money{
    int hrn;
    short kop;
    int getHrn(){
        return hrn;
    }
    void setHrn(int hrn){
        this->hrn = hrn;
    }
    int getKop(){
        return kop;
    }
    void setKop(int kop){
        this->kop = kop;
    }
} cina1, cina2;

int readFile();
void addAmount(money cina, int amount);
void roundUp(money cina);
#endif