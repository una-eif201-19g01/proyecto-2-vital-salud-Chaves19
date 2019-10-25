/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Persona.h
 * Author: ESCINF
 *
 * Created on 4 de octubre de 2019, 9:01
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
private:
    std::string nombre;
    std::string telefono;
    std::string cedula;
public:
    Persona(std::string, std::string, std::string);
    virtual ~Persona();
    void setCedula(std::string);
    std::string getCedula();
    void setTelefono(std::string);
    std::string getTelefono();
    void setNombre(std::string);
    std::string getNombre();
    virtual std::string toString();

   
};

#endif /* PERSONA_H */

