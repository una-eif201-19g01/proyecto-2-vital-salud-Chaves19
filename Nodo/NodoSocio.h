/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoSocio.h
 * Author: achaq
 *
 * Created on October 26, 2019, 11:16 AM
 */

#ifndef NODOSOCIO_H
#define NODOSOCIO_H

#include <ostream>
#include "Socio.h"

class NodoSocio {
    Socio* socio;
    NodoSocio *siguiente;

public:
    NodoSocio();
    NodoSocio(const Socio &socio, NodoSocio *siguiente);
    virtual ~Nodo();

    const Socio &getSocio();
    void setSocio(const Socio &socio);
    NodoSocio *getSiguiente();
    void setSiguiente(NodoSocio *_siguiente);
    std::string toString();

};

#endif /* NODOSOCIO_H */

