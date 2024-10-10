#pragma once

void cargarGastos(float gastosxCategoria[], bool gastoEnAlimentacion[], bool gastoEnLimpieza[]);
void mostrarVector(float vec[], int tam);
int buscarPosicionMaximo(float vec[], int tam);

void puntoA(float gastosxCategoria[], string nombresCategorias[], int tam);
void puntoB(float gastosxCategoria[], string nombresCategorias[], int tam);
void puntoC(float gastosxCategoria[], int tam);
void puntoD(bool gastoEnAlimentacion[], bool gastoEnLimpieza[], int tam);
