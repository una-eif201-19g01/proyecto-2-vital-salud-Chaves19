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
#include "Instructor.h"
class Socio : public Persona {
private:
    std::string fechaInscripcion;
    std::string correoElectronico;
    Instructor* instructor1;
public:
    Socio();
    Socio(std::string, std::string, std::string, std::string, std::string, std::string);
    ~Socio();
    void setFechaInscripcion(std::string);
    std::string getFechaInscripcion();
    void setCorreoElectronico(std::string);
    std::string getCorreoElectronico();
    std::string toString();
    void setInstructor(Instructor*);
    Instructor getInstructor();
    

};

#endif /* SOCIO_H */

