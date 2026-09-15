int switchState = 0;
int iCounter=0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  switchState = digitalRead(2);

  if (switchState == LOW) {
    //Resets counter so it runs 3 passes between each button press
    iCounter=0;
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  } 
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    if (iCounter==3){sosAlert();}

    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    iCounter+=1;
  }
}

//Triggers SOS on green led
void sosAlert() {
  //S
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);

    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);

    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);

    //O
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);

    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);

    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);

    //S
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);

    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);

    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);

    //Resets counter
    iCounter=0;
}
