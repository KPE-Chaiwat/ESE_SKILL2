int sw1 = 2;
int sw2 = 4;
int sw3 = 7;
int sw4 = 8;
int led1 = 3;
int led2 = 5;
int led3 = 6;
int led4 = 9;
int led_status = 0;
void setup() {
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(sw3, INPUT_PULLUP);
  pinMode(sw4, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  if (digitalRead(sw1) == 0 || digitalRead(sw2) == 0 || digitalRead(sw3) == 0 || digitalRead(sw4) == 0) {
    if (led_status == 0) {
      while (1) {
       digitalWrite(led1, 1);
        digitalWrite(led2, 1);
        digitalWrite(led3, 1);
        digitalWrite(led4, 1);
        delay(250);
        digitalWrite(led1, 0);
        digitalWrite(led1, 0);
        digitalWrite(led2, 0);
        digitalWrite(led3, 0);
        digitalWrite(led4, 0);
        delay(250);
        if(digitalRead(sw1) == 0){
          break;
        } if(digitalRead(sw2) == 0){
          break;
        } if(digitalRead(sw3) == 0){
          break;
        } if(digitalRead(sw4) == 0){
          break;
        }
         
      }

      led_status = 1;
    } else {
      digitalWrite(led1, 0);
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
      digitalWrite(led4, 0);

      led_status = 0;
    }
    delay(250);
  }
}
