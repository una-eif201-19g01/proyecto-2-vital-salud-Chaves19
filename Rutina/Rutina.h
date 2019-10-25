/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rutina.h
 * Author: ESCINF
 *
 * Created on 4 de octubre de 2019, 9:03
 */

#ifndef RUTINA_H
#define RUTINA_H
#include "Ejercicio.h"
class Rutina {
private:
    std::string fechaDeInicio;
    std::string fechaDeVencimiento;
    std::string objetivo;
    std::string codigoRutina;
    int cantidad;   
public:
    Rutina(std::string, std::string, std::string, std::string);
    virtual ~Rutina();
    void SetCodigoRutina(std::string codigoRutina);
    std::string GetCodigoRutina();
    void SetObjetivo(std::string objetivo);
    std::string GetObjetivo();
    void SetFechaDeVencimiento(std::string fechaDeVencimiento);
    std::string GetFechaDeVencimiento();
    void SetFechaDeInicio(std::string fechaDeInicio);
    std::string GetFechaDeInicio();
    std::string toString();

};

#endif /* RUTINA_H */

