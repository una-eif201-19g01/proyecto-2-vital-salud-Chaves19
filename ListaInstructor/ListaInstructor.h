/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaInstructor.h
 * Author: achaq
 *
 * Created on October 26, 2019, 2:42 PM
 */

#ifndef LISTAINSTRUCTOR_H
#define LISTAINSTRUCTOR_H

#include <ostream>
#include "NodoInstructor.h"

class ListaInstructor {
    NodoInstructor *primero;
    NodoInstructor *actual;

public:
    ListaInstructor();
    virtual ~ListaInstructor();
    
    void insertarFinal(const Instructor& _instructor);
    bool eliminarInicio();
    int totalNodos();
    bool listaVacia();
    std::string toString();
    NodoInstructor *getPrimero();
    void setPrimero(NodoInstructor *primero);
    NodoInstructor *getActual();
    void setActual(NodoInstructor *actual);

    
};

#endif /* LISTAINSTRUCTOR_H */

