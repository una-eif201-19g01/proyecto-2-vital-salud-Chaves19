/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaSocio.h
 * Author: achaq
 *
 * Created on October 26, 2019, 12:37 PM
 */


#ifndef LISTASOCIO_H
#define LISTASOCIO_H

#include <ostream>
#include "NodoSocio.h"

class ListaSocio {
    NodoSocio *primero;
    NodoSocio *actual;

public:
    ListaSocio();
    virtual ~ListaSocio();

    void insertarFinal(const Socio& _socio);
    bool listaVacia();
    std::string toString();
    NodoSocio *getPrimero() const;
    void setPrimero(NodoSocio *primero);
    NodoSocio *getActual() const;
    void setActual(NodoSocio *actual);
};


#endif /* LISTASOCIO_H */

