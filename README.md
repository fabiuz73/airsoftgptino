# airsoftgptino
# AirsoftGPTino

**AirsoftGPTino** è un progetto Arduino progettato per creare un simulacro di disinnesco per giocatori di softair. Questo sistema integra diverse funzionalità di gioco personalizzabili, utilizzando componenti elettronici come display, buzzer, tastiere e LED RGB.

---

## **Caratteristiche principali**

- **Display principali**: 
  - Display touch Lafvin 4.0" TFT LCD (480x320) per gestione menu e tastierino touch.
  - Display Waveshare 2.4" LCD TFT (240x320) per visualizzare informazioni.
- **Controlli**:
  - Joystick per navigare nel menu.
  - Tastierino touch per l'inserimento di codici numerici.
- **Effetti visivi e sonori**:
  - LED RGB KY-016 per segnalazioni luminose.
  - Buzzer per effetti sonori.
- **Modularità**:
  - Sketch Arduino diviso in più parti per una gestione semplificata e per garantire espandibilità.

---

## **Componenti utilizzati**

### **Hardware**
- **Display**:
  - Lafvin 4.0" TFT LCD Touch Display Shield Module (480x320, SPI, ST7796S)
  - Waveshare 2.4" LCD TFT Display (240x320, SPI, ILI9341)
- **Altri componenti**:
  - Buzzer
  - LED RGB KY-016
  - Joystick
  - Modulo per il livello logico (opzionale)
  - Arduino Mega 2560

### **Collegamenti**
#### **Display touch Lafvin 4.0"**
- **VCC**: 5V
- **GND**: GND
- **CS**: PIN 10
- **RST**: PIN 8
- **DC/CS**: PIN 9
- **SDI (MOSI)**: PIN 51
- **SCK**: PIN 52
- **LED**: 5V
- **SDO (MISO)**: PIN 50
- **T_CLK**: PIN 52
- **T_CS**: PIN 6
- **T_DIN**: PIN 51
- **T_DO**: PIN 50
- **T_IRQ**: PIN 7

#### **Display Waveshare 2.4"**
- **VCC**: Alimentazione
- **GND**: Massa
- **DIN**: MOSI
- **CLK**: SCK
- **CS**: Chip Select
- **DC**: Data/Command
- **RST**: Reset
- **BL**: Retroilluminazione

---

## **Funzionalità previste**

1. **Disinnesco tramite codice numerico**:
   - Inserimento di un codice tramite tastierino touch.
   - Codice modificabile dall'utente.
2. **Countdown e allarme**:
   - Visualizzazione del tempo rimanente su uno dei display.
   - Segnalazione sonora e visiva quando il tempo sta per scadere.
3. **Modalità di gioco personalizzabili**:
   - Diverse modalità con regole di disinnesco specifiche.
4. **Interfaccia utente**:
   - Navigazione tramite joystick.
   - Menu intuitivo e configurabile.

---

## **Come iniziare**

1. **Clona il repository**:
   ```bash
   git clone https://github.com/fabiuz73/airsoftgptino.git
   ```

2. **Carica lo sketch su Arduino Mega**:
   - Apri il file `.ino` con l'IDE Arduino o Visual Studio Code.
   - Seleziona la scheda Arduino Mega 2560 e la porta corretta.
   - Compila e carica lo sketch.

3. **Collega i componenti**:
   - Segui i collegamenti indicati nella sezione "Collegamenti".

4. **Esegui il test**:
   - Alimenta il sistema e verifica il funzionamento di ciascun componente.

---

## **Contributi**

Contributi, suggerimenti e miglioramenti sono benvenuti! Apri una **issue** o invia una **pull request** su [GitHub](https://github.com/fabiuz73/airsoftgptino).

---

## **Licenza**

Questo progetto è rilasciato sotto la licenza [MIT](LICENSE). Puoi utilizzarlo liberamente per scopi personali e didattici.
