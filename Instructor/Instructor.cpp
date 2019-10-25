/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Instructor.cpp
 * Author: ESCINF
 * 
 * Created on 4 de octubre de 2019, 9:02
 */

#include "Instructor.h"

Instructor::Instructor(std::string  nombre, std::string telefono, std::string cedula, std::string fechaInscripcion): Persona(nombre, telefono, cedula) {
}

Instructor::~Instructor() {
}

std::string Instructor::toString(){
    stringstream s;
    s<<Persona::toString()<<"\n";
    return s.str();
}

