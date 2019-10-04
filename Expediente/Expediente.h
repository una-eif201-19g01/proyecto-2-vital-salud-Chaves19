/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Expediente.h
 * Author: ESCINF
 *
 * Created on 4 de octubre de 2019, 9:02
 */

#ifndef EXPEDIENTE_H
#define EXPEDIENTE_H

class Expediente {
public:
    Expediente();
    Expediente(const Expediente& orig);
    virtual ~Expediente();
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

#endif /* EXPEDIENTE_H */

