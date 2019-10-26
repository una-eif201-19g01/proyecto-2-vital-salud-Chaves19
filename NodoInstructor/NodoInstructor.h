/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoInstructor.h
 * Author: achaq
 *
 * Created on October 26, 2019, 2:43 PM
 */

#ifndef NODOINSTRUCTOR_H
#define NODOINSTRUCTOR_H

#include <ostream>
#include "Instructor.h"

class NodoInstructor {
    
    Instructor* instructor;
    NodoInstructor *siguiente;

public:
    NodoInstructor();
    NodoInstructor(const Instructor &instructor, NodoInstructor *siguiente);
    virtual ~Nodo();

    const Instructor &getInstructor();
    void setInstructor(const Instructor &instructor);
    NodoInstructor *getSiguiente();
    void setSiguiente(NodoInstructor *_siguiente);
    std::string toString();

};

#endif /* NODOINSTRUCTOR_H */

