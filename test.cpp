#include <SFML/Graphics.hpp>
 
int main() {
    //Utwórz okno
    sf::RenderWindow window(sf::VideoMode(800, 600, 32), "Hello World - SFML");
             
    // Główna pętla
    while (window.isOpen()) {
        //Obsługa zdarzeń
        sf::Event event;
        while (window.pollEvent(event)) {
            //Zamknięcie okna spowoduje zakończenie programu
            if (event.type == sf::Event::Closed)
                window.close();
        }       
        //Wyczyść ekran i wypełnij go czerwonym kolorem
        window.clear(sf::Color(255, 0, 0));       
        //Wyświetl zawartość bufora (renderowany obraz) na ekranie
        window.display();
    }
}