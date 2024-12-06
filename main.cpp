#include <iostream>
#include "pila.cpp"
#include "coda.cpp"

int main(){
   
    Pila<int, 5> miaPila;

    
    miaPila.push(10);
    miaPila.push(20);
    miaPila.push(30);
    
    int topElem = miaPila.top();
    if (topElem != 0) {
        std::cout << "Elemento in cima: " << topElem << std::endl; 
    }


    int poppedElem = miaPila.pop();
    if (poppedElem != 0) {
        std::cout << "Rimosso dalla pila: " << poppedElem << std::endl; 
    }

    std::cout << "La pila è vuota? " << (miaPila.isEmpty() ? "Sì" : "No") << std::endl; 

  
    std::cout << "Dimensione della pila: " << miaPila.size() << std::endl; 
   
    miaPila.pop();
    miaPila.pop();

  
    std::cout << "La pila è vuota? " << (miaPila.isEmpty() ? "Sì" : "No") << std::endl; 
    
    Coda<int, 5> miaCoda;

    
    miaCoda.enqueue(10);
    miaCoda.enqueue(20);
    miaCoda.enqueue(30);
    miaCoda.enqueue(40);
    miaCoda.enqueue(50);

    
    miaCoda.mostra(); 

    
    int frontElem = miaCoda.front();
    std::cout << "Elemento in testa: " << frontElem << std::endl;

   
    int dequeuedElem = miaCoda.dequeue();
    std::cout << "Rimosso dalla coda: " << dequeuedElem << std::endl; 

   
    miaCoda.enqueue(60);
    

    std::cout << "La coda è vuota? " << (miaCoda.isEmpty() ? "Sì" : "No") << std::endl; 

    
    std::cout << "Dimensione della coda: " << miaCoda.size() << std::endl; 


    return 0;

}
