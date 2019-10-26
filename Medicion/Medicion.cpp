/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medicion.cpp
 * Author: achaq
 * 
 * Created on October 24, 2019, 7:46 PM
 */

#include "Medicion.h"

Medicion::Medicion() {
}

Medicion::Medicion(const Medicion& orig) {
}

Medicion::~Medicion() {
}

void Medicion::setGrasaCorporal(float grasaCorporal) {
    this->grasaCorporal = grasaCorporal;
}

float Medicion::getGrasaCorporal(){
    return grasaCorporal;
}

void Medicion::setMasaMuscular(float masaMuscular) {
    this->masaMuscular = masaMuscular;
}

float Medicion::getMasaMuscular(){
    return masaMuscular;
}

void Medicion::setPeso(float peso) {
    this->peso = peso;
}
float Medicion::getPeso() const {
    return peso;
}
