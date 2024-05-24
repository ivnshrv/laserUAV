#define main_time 1000

#define up 50
#define down 100
#define back 200
#define forward 300
#define left 400
#define right 500


volatile int counter = 0;
int analogPin = A2;

void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(5, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(3), sign, CHANGE);
}

void sign() {
  counter++; 
}

void loop() {

  int i = 0;

  while (i < main_time){

    if (analogRead(analogPin) > 500){
      digitalWrite(5, LOW);
      delay(5);
      i+=1;
    }
    else {
      digitalWrite(5, HIGH);
      delay(5);
      i+=1;
    }
  }

  if(counter <= forward + 25 && counter >= forward - 25){
    Serial.println("f");
  }
  if(counter <= back + 25 && counter >= back - 25){
    Serial.println("b");
  }
  if(counter <= left + 25 && counter >= left - 25){
    Serial.println("l");
  }
  if(counter <= right + 25 && counter >= right - 25){
    Serial.println("r");
  }
  if(counter <= up + 25 && counter >= up - 25){
    Serial.println("u");
  }
  if(counter <= down + 25 && counter >= down - 25){
    Serial.println("d");
  }
  //Serial.println(counter); 
  counter = 0;
  //Serial.print(" "); 
  //Serial.println(analogRead(analogPin));  
}