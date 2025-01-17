#include "Logic.h"
#include "DisplayI2C.h"

void initLogic() {
    // Inizializza logica di gioco
}

void updateLogic() {
    // Aggiorna logica di gioco
    updateDisplayI2C("Game Mode:", "SoftAir", "Timer: 30s", "Ready!");
}
