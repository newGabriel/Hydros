#ifndef HYDROS_CPP
#define HYDROS_CPP

#include "Hydros.hpp"

BanheiroPublico::BanheiroPublico(){
    this->pia = Pia();
    this->vaso = VasoSanitario();
    this->chuveiro = Chuveiro();
}

BanheiroPublico::~BanheiroPublico(){
    
}

void BanheiroPublico::setStatus(bool s){
    this->pia.setStatus(s);
}

void Pia::setStatus(bool s){
    this->status = s;
    if(s)
        this->vazao = 20;
    else
        this->vazao = 0;
}

#endif