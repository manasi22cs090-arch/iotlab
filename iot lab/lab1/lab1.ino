int led[] = {2, 3, 4, 5,6}; 

void setup() {
  
  for (int i = 0; i < 5; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  
  for (int i = 5; i > 0; i--) {
    digitalWrite(led[i], HIGH); 
    delay(1000);                     
    digitalWrite(led[i], LOW);  
    delay(1000);                     
  }
}
