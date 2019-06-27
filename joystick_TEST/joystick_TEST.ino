int minVert;
int maxVert;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  maxVert = analogRead(0);
  minVert = analogRead(0);

  for(int i = 1000; i > 0; i--){
    Serial.println(i);
    int tempVal = analogRead(0);
    if(tempVal > maxVert) maxVert = tempVal;
    if(tempVal < minVert) minVert = tempVal;
  }
}

void loop() {
  int val = map(analogRead(0), minVert,maxVert,-10,10);
  Serial.println(val);
}
