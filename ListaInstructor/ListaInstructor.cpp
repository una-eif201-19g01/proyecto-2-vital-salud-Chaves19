/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaInstructor.cpp
 * Author: achaq
 * 
 * Created on October 26, 2019, 2:42 PM
 */

#include "ListaInstructor.h"

ListaInstructor::ListaInstructor() {
    primero = nullptr;
    actual = nullptr;
}

ListaInstructor::~ListaInstructor() {
    while (primero != nullptr) {
        actual = primero;
        primero = primero->getSiguiente();
        delete(actual);
    }
}

void ListaInstructor::insertarFinal(const Instructor& _instructor) {
    actual = primero;
    if (primero == nullptr) {
        primero = new NodoInstructor(_instructor, nullptr);
    } else {
        while (actual->getSiguiente() != nullptr) {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(new NodoInstructor(_instructor, nullptr));
    }
}

bool ListaInstructor::listaVacia() {
    return primero == nullptr;
}

std::string ListaInstructor::toString() {
    std::string resultado;
    actual = primero;

    while (actual != nullptr) {
        resultado += actual->toString();
        actual = actual->getSiguiente();
    }

    return resultado;
}

NodoInstructor *ListaInstructor::getPrimero(){
    return primero;
}

void ListaInstructor::setPrimero(NodoInstructor *primero) {
    ListaInstructor::primero = primero;
}

NodoInstructor *ListaInstructor::getActual(){
    return actual;
}

void ListaInstructor::setActual(NodoInstructor *actual) {
    ListaInstructor::actual = actual;
}
