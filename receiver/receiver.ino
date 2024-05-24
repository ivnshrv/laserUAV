#define main_time 100
#define error_rate 1
#define up 3
#define down 4
#define back 5
#define forward 6
#define left 7
#define right 8


volatile int counter = 0;
int analogPin = A0;

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

    if (analogRead(analogPin) > 1000){
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

  if(counter <= forward + error_rate && counter >= forward - error_rate){
    Serial.println("f");
  }
  if(counter <= back + error_rate && counter >= back - error_rate){
    Serial.println("b");
  }
  if(counter <= left + error_rate && counter >= left - error_rate){
    Serial.println("l");
  }
  if(counter <= right + error_rate && counter >= right - error_rate){
    Serial.println("r");
  }
  if(counter <= up + error_rate && counter >= up - error_rate){
    Serial.println("u");
  }
  if(counter <= down + error_rate && counter >= down - error_rate){
    Serial.println("d");
  }
  //Serial.print(counter); 
  counter = 0;
  //Serial.print(" "); 
  //Serial.println(analogRead(analogPin));  
}