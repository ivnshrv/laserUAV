#define space 100
//#define pre_space 50
#define space1 5
#define space2 30
#define space3 60
#define space4 80
void setup() {
  pinMode(8, OUTPUT);
  //pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  
  int btn1 = 0;
  Serial.print(analogRead(A1));
  Serial.print(" ");
  Serial.println(analogRead(A2));
  if(analogRead(A1) >= 1020){
    digitalWrite(8, HIGH);
    delay(space1);
    digitalWrite(8, LOW);
    delay(space1);
  }
  if(analogRead(A1) <= 400){
    digitalWrite(8, HIGH);
    delay(space2);
    digitalWrite(8, LOW);
    delay(space2);

  }
  
  if(analogRead(A2) >= 1020){
    digitalWrite(8, HIGH);
    delay(space3);
    digitalWrite(8, LOW);
    delay(space3);
  }
  if(analogRead(A2) <= 400 ){
    digitalWrite(8, HIGH);
    delay(space4);
    digitalWrite(8, LOW);
    delay(space4);
  }

  else{
    digitalWrite(8, LOW);
  }
  delay(100);
}
