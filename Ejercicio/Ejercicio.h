/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ejercicio.h
 * Author: ESCINF
 *
 * Created on 4 de octubre de 2019, 9:03
 */

#ifndef EJERCICIO_H
#define EJERCICIO_H

class Ejercicio {
public:
    Ejercicio();
    Ejercicio(const Ejercicio& orig);
    virtual ~Ejercicio();
private:
    int series;
    int repeticiones;
    

};

#endif /* EJERCICIO_H */

