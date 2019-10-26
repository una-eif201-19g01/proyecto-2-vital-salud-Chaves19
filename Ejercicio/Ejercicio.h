/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ejercicio.h
 * Author: achaq
 *
 * Created on October 24, 2019, 7:46 PM
 */

#ifndef EJERCICIO_H
#define EJERCICIO_H

class Ejercicio {
private:
    std::string nombre;
    int series;
    int repeticiones;
public:
    Ejercicio();
    virtual ~Ejercicio();

};

#endif /* EJERCICIO_H */

