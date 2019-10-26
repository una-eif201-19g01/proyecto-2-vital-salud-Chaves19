/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: achaq
 * 
 * Created on October 26, 2019, 11:16 AM
 */

#include "NodoSocio.h"


NodoSocio::NodoSocio() {}

NodoSocio::NodoSocio(const Socio &socio, NodoSocio *siguiente) : socio(socio), siguiente(siguiente) {}

NodoSocio::~NodoSocio() {}

const Socio &NodoSocio::getSocio(){
    return socio;
}

void NodoSocio::setSocio(const Socio &socio) {
    NodoSocio::socio = socio;
}

NodoSocio *NodoSocio::getSiguiente(){
    return siguiente;
}

void NodoSocio::setSiguiente(NodoSocio *_siguiente) {
    NodoSocio::siguiente = _siguiente;
}

std::string NodoSocio::toString() {
    return socio->toString();
}
