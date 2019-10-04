/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Persona.cpp
 * Author: ESCINF
 * 
 * Created on 4 de octubre de 2019, 9:01
 */

#include "Persona.h"

Persona::Persona() {
}

Persona::Persona(const Persona& orig) {
}

Persona::~Persona() {
}

void Persona::setCedula(std::string cedula) {
    this->cedula = cedula;
}

std::string Persona::getCedula(){
    return cedula;
}

void Persona::setTelefono(std::string telefono) {
    this->telefono = telefono;
}

std::string Persona::getTelefono(){
    return telefono;
}

void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Persona::getNombre(){
    return nombre;
}

