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

Socio::Socio(): Persona(),fechaInscripcion(" "), correoElectronico(" "){}

Socio::Socio(std::string  nombre, std::string telefono, std::string cedula, std::string fechaInscripcion, std::string correoElectronico): Persona(nombre, telefono, cedula),
    fechaInscripcion(fechaInscripcion), correoElectronico(correoElectronico){
    instructor1 = NULL;
}

Socio::~Socio() {}

void Socio::setFechaInscripcion(std::string fechaInscripcion){
    this->fechaInscripcion = fechaInscripcion;
}

std::string Socio::getFechaInscripcion(){
    return fechaInscripcion;
}

void Socio::setCorreoElectronico(std::string correoElectronico){
    this->correoElectronico = correoElectronico;
}
std::string Socio::getCorreoElectronico(){
    return correoElectronico;
}
std::string Socio::toString(){
    stringstream s;
    s<<Persona.toString();
    s<<"CorreoElectronico: "<<getCorreoElectronico()<<"\n";
    s<<"fechaDeInscrpcion: "<<getFechaInscripcion()<<"\n";
    return s.str();
}
void Socio::setInstructor(Instructor* instructor1){
   this->instructor1 = instructor1;
    
}

Instructor Socio::getInstructor(){
    return instructor1;  
}