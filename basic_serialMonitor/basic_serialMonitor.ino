// Define LED pin
#define LED_PIN1 3
#define LED_PIN2 5
#define LED_PIN3 6
#define LED_PIN4 9
int buttonPin1 = 2;
int buttonPin2 = 4;
int buttonPin3 = 7;
int buttonPin4 = 8;
char key = '0' ; //ตัวแปรเก็บค่าที่คอมพิวเตอร์ส่งมา
void setup() {
  Serial.begin(9600);
  Serial.println("TONG");
  // Set LED pin as an output
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
}

void loop() {
  // Turn on LED
 // digitalWrite(LED_PIN1, HIGH);
 // digitalWrite(LED_PIN2, HIGH);
//  digitalWrite(LED_PIN3, HIGH);
 // digitalWrite(LED_PIN4, HIGH);

  // Delay for 500 ms
  delay(500);



if (Serial.available() > 0) { //ถ้าคอมพิวเตอร์ส่งข้อมูลมาใหจะทำใน if นี้
    key = Serial.read(); //นำค่าที่คอมพิวเตอร์ส่งมาเก็บในตัวแปร key
    Serial.print("key : ");
    Serial.println(key); //Arduino ส่งค่าในตัวแปร key เข้าคอมพิวเตอร์ Serial Monitor
  }
  if (key == '0') { //ถ้าตัวแปร key เป็น 0 ให้ทำในปีกกานี้
  // Turn off LED
  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, LOW);
  digitalWrite(LED_PIN4, LOW);
  }
  if (key == '1') { //ถ้าตัวแปร key เป็น 1 ให้ทำในปีกกานี้
    digitalWrite(LED_PIN1, HIGH);// LED 1 ติดสว่าง
    Serial.println("LED1 ON");
  }
  if (key == '2') { //ถ้าตัวแปร key เป็น 2 ให้ทำในปีกกานี้
      digitalWrite(LED_PIN2, HIGH); // LED 2 ติดสว่าง
    Serial.println("LED2 ON");
  }
  if (key == '3') { //ถ้าตัวแปร key เป็น 3 ให้ทำในปีกกานี้
    digitalWrite(LED_PIN3, HIGH); // LED 3 ติดสว่าง
    Serial.println("LED3 ON");
  }  if (key == '4') { //ถ้าตัวแปร key เป็น 3 ให้ทำในปีกกานี้
    digitalWrite(LED_PIN4, HIGH); // LED 3 ติดสว่าง
    Serial.println("LED4 ON");
  }
  delay(500);
}
