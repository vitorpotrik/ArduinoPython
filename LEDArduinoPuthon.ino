const int ledPin = 13; // Pino onde o LED está conectado

void setup() {
    pinMode(ledPin, OUTPUT); // Define o pino do LED como saída
    Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
    if (Serial.available() > 0) {
        char command = Serial.read(); // Lê o comando da porta serial
        if (command == '1') {
            digitalWrite(ledPin, HIGH); // Liga o LED
            //delay(2000); // Mantém o LED aceso por 500 ms
            //digitalWrite(ledPin, LOW); // Desliga o LED
            //delay(500); // Mantém o LED apagado por 500 ms
            //digitalWrite(ledPin, HIGH); // Liga o LED novamente
            //delay(2000); // Mantém o LED aceso por 500 ms
            //digitalWrite(ledPin, LOW); // Desliga o LED
        } else if (command == '0') {
            digitalWrite(ledPin, LOW); // Desliga o LED
        }
    }
}


