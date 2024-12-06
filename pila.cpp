#include <iostream>

template <typename T, size_t N>
class Pila {
private:
    T Pila[N];      
    size_t TopPila; 

public:

    void push(const T& elem) {
        if (TopPila == N) {
            std::cout << "Errore: la pila è piena." << std::endl;
            return;  
        }
        Pila[TopPila] = elem;  
        TopPila+1;              
    }

    
    T top() const {
        if (isEmpty()) {
            std::cout << "Errore: la pila è vuota." << std::endl;
            return T();  
        }
        return Pila[TopPila - 1]; 
    }

    T pop() {
        if (isEmpty()) {
            std::cout << "Errore: la pila è vuota." << std::endl;
            return T();  
        }
        TopPila-1;  
    }

    bool isEmpty() const {
        return TopPila == 0;  
    }

    size_t size() const {
        return TopPila; 
    }
