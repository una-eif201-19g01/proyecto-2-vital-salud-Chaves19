/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rutina.cpp
 * Author: ESCINF
 * 
 * Created on 4 de octubre de 2019, 9:03
 */

#include "Rutina.h"

Rutina::Rutina(std::string fechaDeInicio, std::string fechaDeVencimiento, std::string objetivo, std::string codigoRutina): fechaDeInicio(fechaDeInicio),
 fechaDeVencimiento(fechaDeVencimiento), objetivo(objetivo),codigoRutina(codigoRutina){}

Rutina::~Rutina() {
}

void Rutina::SetCodigoRutina(std::string codigoRutina) {
    this->codigoRutina = codigoRutina;
}

std::string Rutina::GetCodigoRutina(){
    return codigoRutina;
}

void Rutina::SetObjetivo(std::string objetivo) {
    this->objetivo = objetivo;
}

std::string Rutina::GetObjetivo(){
    return objetivo;
}

void Rutina::SetFechaDeVencimiento(std::string fechaDeVencimiento) {
    this->fechaDeVencimiento = fechaDeVencimiento;
}

std::string Rutina::GetFechaDeVencimiento(){
    return fechaDeVencimiento;
}

void Rutina::SetFechaDeInicio(std::string fechaDeInicio) {
    this->fechaDeInicio = fechaDeInicio;
}

std::string Rutina::GetFechaDeInicio(){
    return fechaDeInicio;
}
std::string Rutina::toString(){
    
}

