/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ejercicio.cpp
 * Author: ESCINF
 * 
 * Created on 4 de octubre de 2019, 9:03
 */

#include "Ejercicio.h"

Ejercicio::Ejercicio() {
}

Ejercicio::Ejercicio(const Ejercicio& orig) {
}

Ejercicio::~Ejercicio() {
}

void Ejercicio::setNombreEjercicio(std::string nombreEjercicio) {
    this->nombreEjercicio = nombreEjercicio;
}

std::string Ejercicio::getNombreEjercicio(){
    return nombreEjercicio;
}

void Ejercicio::setRepeticiones(int repeticiones) {
    this->repeticiones = repeticiones;
}

int Ejercicio::getRepeticiones(){
    return repeticiones;
}

void Ejercicio::setSeries(int series) {
    this->series = series;
}

int Ejercicio::getSeries(){
    return series;
}

