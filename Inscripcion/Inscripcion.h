/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inscripcion.h
 * Author: ESCINF
 *
 * Created on 4 de octubre de 2019, 9:02
 */

#ifndef INSCRIPCION_H
#define INSCRIPCION_H

class Inscripcion {
public:
    Inscripcion();
    Inscripcion(const Inscripcion& orig);
    virtual ~Inscripcion();
    void setGrasaCorporal(float);
    float getGrasaCorporal();
    void setMasaMuscular(float);
    float getMasaMuscular();
    void setPeso(float);
    float getPeso();
private:
    float peso;
    float masaMuscular;
    float grasaCorporal;
};

#endif /* INSCRIPCION_H */

