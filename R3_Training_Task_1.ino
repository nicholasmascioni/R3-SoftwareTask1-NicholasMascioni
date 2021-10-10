// Pins for Decoder 1
const byte a1 = 2;
const byte a2 = 3;
const byte a3 = 4;
const byte a4 = 5;

// Pins for Decoder 2
const byte b1 = 7;
const byte b2 = 8;
const byte b3 = 9;
const byte b4 = 10;

int n; // Stores the number
int digit1; // Stores the digit for the first display (the "tens" column)
int digit2; // Stores the digit for the second display (the "ones" column)

void display1(int num) { // For displaying numbers 0-9 on the first display
  if(num == 0) { // 0000
    digitalWrite(a1, LOW);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
  }
  if(num == 1) { // 0001
    digitalWrite(a1, HIGH);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
  }
  if(num == 2) { // 0010
    digitalWrite(a1, LOW);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
  }
  if(num == 3) { // 0011
    digitalWrite(a1, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
  }
  if(num == 4) { // 0100
    digitalWrite(a1, LOW);
    digitalWrite(a2, LOW);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, LOW);
  }
  if(num == 5) { // 0101
    digitalWrite(a1, HIGH);
    digitalWrite(a2, LOW);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, LOW);
  }
  if(num == 6) { //0110
    digitalWrite(a1, LOW);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, LOW);
  }
  if(num == 7) { // 0111
    digitalWrite(a1, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, LOW);
  }
  if(num == 8) { // 1000
    digitalWrite(a1, LOW);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, HIGH);
  }
  if(num == 9) { // 1001
    digitalWrite(a1, HIGH);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, HIGH);
  }
}

void display2(int num) { // For displaying numbers 0-9 on the second display
  if(num == 0) { // 0000
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(b4, LOW);
  }
  if(num == 1) { // 0001
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(b4, LOW);
  }
  if(num == 2) { // 0010
    digitalWrite(b1, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, LOW);
    digitalWrite(b4, LOW);
  }
  if(num == 3) { // 0011
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, LOW);
    digitalWrite(b4, LOW);
  }
  if(num == 4) { // 0100
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, HIGH);
    digitalWrite(b4, LOW);
  }
  if(num == 5) { // 0101
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(b3, HIGH);
    digitalWrite(b4, LOW);
  }
  if(num == 6) { //0110
    digitalWrite(b1, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, HIGH);
    digitalWrite(b4, LOW);
  }
  if(num == 7) { // 0111
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, HIGH);
    digitalWrite(b4, LOW);
  }
  if(num == 8) { // 1000
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(b4, HIGH);
  }
  if(num == 9) { // 1001
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);
    digitalWrite(b4, HIGH);
  }
}

void setup() {
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
  pinMode(a4, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(b4, OUTPUT);
  pinMode(A0, INPUT); 
}

void loop() {
  int potValue = analogRead(A0); // To read the potentiometer value
  int potMapped = map(potValue, 0, 1023, 0, 99); // Using the map function allows for the potentiometer to output values from only 0-99
  
  n = potMapped;
  digit1 = n/10; // Stores the "tens" value of n by dividing it by 10, since int only stores whole numbers, anything after the decimal will be ignored
  digit2 = n%10; // Stores the "ones" value of n by taking the remainder of n/10

  display1(digit1);
  display2(digit2);
}
