/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaSocio.cpp
 * Author: achaq
 * 
 * Created on October 26, 2019, 12:37 PM
 */

#include "ListaSocio.h"

ListaSocio::ListaSocio() {
    primero = nullptr;
    actual = nullptr;
}

ListaSocio::~ListaSocio() {
    while (primero != nullptr) {
        actual = primero;
        primero = primero->getSiguiente();
        delete(actual);
    }
}

void ListaSocio::insertarFinal(const Socio& _socio) {
    actual = primero;
    if (primero == nullptr) {
        primero = new NodoSocio(_socio, nullptr);
    } else {
        while (actual->getSiguiente() != nullptr) {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(new NodoSocio(_socio, nullptr));
    }
}


bool ListaSocio::listaVacia() {
    return primero == nullptr;
}

std::string ListaSocio::toString() {
    std::string resultado;
    actual = primero;

    while (actual != nullptr) {
        resultado += actual->toString();
        actual = actual->getSiguiente();
    }

    return resultado;
}

NodoSocio *ListaSocio::getPrimero() const {
    return primero;
}

void ListaSocio::setPrimero(NodoSocio *primero) {
    ListaSocio::primero = primero;
}

NodoSocio *ListaSocio::getActual() const {
    return actual;
}

void ListaSocio::setActual(NodoSocio *actual) {
    ListaSocio::actual = actual;
}

