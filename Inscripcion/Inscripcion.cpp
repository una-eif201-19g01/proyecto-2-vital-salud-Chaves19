/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Expediente.cpp
 * Author: ESCINF
 * 
 * Created on 4 de octubre de 2019, 9:02
 */

#include "Inscripcion.h"

Inscripcion::Inscripcion() {
}

Inscripcion::Inscripcion(const Inscripcion& orig) {
}

Inscripcion::~Inscripcion() {
}

void Inscripcion::setGrasaCorporal(float grasaCorporal) {
    this->grasaCorporal = grasaCorporal;
}

float Inscripcion::getGrasaCorporal(){
    return grasaCorporal;
}

void Inscripcion::setMasaMuscular(float masaMuscular) {
    this->masaMuscular = masaMuscular;
}

float Inscripcion::getMasaMuscular(){
    return masaMuscular;
}

void Inscripcion::setPeso(float peso) {
    this->peso = peso;
}

float Inscripcion::getPeso() const {
    return peso;
}

