int sensor = 12;
int led = 13;
int status = 0;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  status = digitalRead(sensor);

  if(status == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else 
  {
    digitalWrite(led, LOW);
  }
}
