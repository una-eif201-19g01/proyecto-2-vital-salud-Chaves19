/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Socio.h
 * Author: ESCINF
 *
 * Created on 4 de octubre de 2019, 9:02
 */

#ifndef SOCIO_H
#define SOCIO_H
#include "Persona.h"
class Socio : public Persona {
private:
    std::string fechaInscripcion;
public:
    Socio(std::string, std::string, std::string, std::string, std::string);
    ~Socio();
    void setFechaInscripcion(std::string);
    std::string getFechaInscripcion();
    std::string toString();
    

};

#endif /* SOCIO_H */

