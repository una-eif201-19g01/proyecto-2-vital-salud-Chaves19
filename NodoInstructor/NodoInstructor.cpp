/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoInstructor.cpp
 * Author: achaq
 * 
 * Created on October 26, 2019, 2:43 PM
 */

#include "NodoInstructor.h"

NodoInstructor::NodoInstructor() {}

NodoInstructor::NodoInstructor(const Instructor &instructor, NodoInstructor *siguiente) : instructor(instructor), siguiente(siguiente) {}

NodoInstructor::~NodoInstructor() {}

const Instructor &NodoInstructor::getInstructor(){
    return instructor;
}

void NodoInstructor::setInstructor(const Instructor &instructor) {
    NodoInstructor::instructor = instructor;
}

NodoInstructor *NodoInstructor::getSiguiente(){
    return siguiente;
}

void NodoInstructor::setSiguiente(NodoInstructor *_siguiente) {
    NodoInstructor::siguiente = _siguiente;
}

std::string NodoInstructor::toString() {
    return instructor->toString();
}

