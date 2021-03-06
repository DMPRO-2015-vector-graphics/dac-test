
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// POTRD = x
// PORTB = y

void loop() {
  // (x,y) = (0,0)
  PORTD = B00000100;
  PORTB = B00000100;
  delayMicroseconds(1);

  // (x,y) = (1,0)
  PORTD = B00001100;
  PORTB = B00000100;
  delayMicroseconds(1);

  // (x,y) = (1,1)
  PORTD = B00001100;
  PORTB = B00001100;
  delayMicroseconds(1);

  // (x,y) = (0,1)
  PORTD = B00000100;
  PORTB = B00001100;
}
