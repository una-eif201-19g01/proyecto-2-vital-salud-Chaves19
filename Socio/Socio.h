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
public:
    Socio();
    Socio(const Socio& orig);
    virtual ~Socio();
private:
    std::string FechaInscripcion;
    

};

#endif /* SOCIO_H */

