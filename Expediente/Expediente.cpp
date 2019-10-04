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

#include "Expediente.h"

Expediente::Expediente() {
}

Expediente::Expediente(const Expediente& orig) {
}

Expediente::~Expediente() {
}

void Expediente::setGrasaCorporal(float grasaCorporal) {
    this->grasaCorporal = grasaCorporal;
}

float Expediente::getGrasaCorporal(){
    return grasaCorporal;
}

void Expediente::setMasaMuscular(float masaMuscular) {
    this->masaMuscular = masaMuscular;
}

float Expediente::getMasaMuscular(){
    return masaMuscular;
}

void Expediente::setPeso(float peso) {
    this->peso = peso;
}

float Expediente::getPeso() const {
    return peso;
}

