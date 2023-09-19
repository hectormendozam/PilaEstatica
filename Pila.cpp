#include <iostream>
using namespace std;

template <typename T>
class Pila {
public:
	int capacidad;
	int cima;
	T vector[100];
	Pila(int cap);
	bool esVacia();
	bool esLlena();
	void apilar(T ele);
	void desapilar(T ele);
	void obtenerCima();
	void mostrarPila();
};

template <typename T>
Pila <T>::Pila(int cap) {
	capacidad = cap;
	cima = -1;
}

template <typename T>
bool Pila <T>::esVacia() {
	if (cima == -1)
		return true;
	return false;
}

template <typename T>
bool Pila <T>::esLlena() {
	if (cima == capacidad - 1) {
		return true;
	}
	else {
		return false;
	}
}

template <typename T>
void Pila <T>::apilar(T ele) {
	if (!esLlena()) {
		cima++;
		vector[cima] = ele;
	}
	else {
		cout << "Pila llena";
	}
}

template <typename T>
void Pila <T>::desapilar(T ele) {
	if (!esVacia()) {
		cima--;
	}
	else {
		cout << "Pila vacia";
	}
}

template <typename T>
void Pila <T>::obtenerCima() {
	if (!esVacia()) {
		cout << vector[cima];
	}
	else {
		cout << "Pila vacia";
	}
}

template <typename T>
void Pila <T>::mostrarPila() {
	if (!esVacia()) {
		for (int i = cima; i >= 0; i--) {
			cout << vector[i] << endl;
		}
	}
	else {
		cout << "La pila esta vacia";
	}
}

int main() {
	int ele;

	cout << "Ingrese un numero entero: ";
	cin >> ele;

	Pila <int> p1(15);

	if (ele == 0) {
		p1.apilar(0);
	}
	while (ele > 0) {
		int residuo = ele % 2;
		p1.apilar(residuo);
		ele /= 2;
	}

	cout << "\nRepresentacion binaria: ";
	cout << "\n";
	p1.mostrarPila();

	return 0;
}

