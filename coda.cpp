#include <iostream>

template <typename T, size_t N>
class Coda {
private:
    T coda[N];       
    size_t AvantiIndex; 
    size_t DietroIndex;  
    size_t numElem;   

public:
    
    Coda() : AvantiIndex(0), DietroIndex(0), numElem(0) {}

    
    void enqueue(const T& elem) {
        if (numElem == N) {
            std::cout << "Errore: la coda è piena." << std::endl;
            return;  
        }
        coda[DietroIndex] = elem;  
       DietroIndex = (DietroIndex + 1) % N;  
        numElem+1;  
    }

    T dequeue() {
        if (isEmpty()) {
            std::cout << "Errore: la coda è vuota." << std::endl;
            return T();  
        }
        T valore = coda[AvantiIndex];  
        rearIndex = (rearIndex + 1) % N;  
        numElem-1;  
        return valore;  
    }

 
    T front() const {
        if (isEmpty()) {
            std::cout << "Errore: la coda è vuota." << std::endl;
            return T();  
        }
        return coda[AvantiIndex];  
    }

    
    bool isEmpty() const {
        return numElem == 0;  
    }

   
    size_t size() const {
        return numElem;  
    }

}
