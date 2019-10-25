/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Socio.cpp
 * Author: ESCINF
 * 
 * Created on 4 de octubre de 2019, 9:02
 */

#include "Socio.h"

Socio::Socio(std::string  nombre, std::string telefono, std::string cedula, std::string fechaInscripcion): Persona(nombre, telefono, cedula), fechaInscripcion(fechaInscripcion) {}

Socio::~Socio() {}

void Socio::setFechaInscripcion(std::string fechaInscripcion){
    this->fechaInscripcion = fechaInscripcion;
}

std::string Socio::getFechaInscripcion(){
    return fechaInscripcion;
}
std::string Socio::toString(){
    stringstream s;
    s<<Persona.toString();
    s<<"fechaDeInscrpcion: "<<getFechaInscripcion()<<"\n";
    return s.str();
}