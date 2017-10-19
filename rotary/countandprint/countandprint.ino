int count = -1;
int startstop = 0;
int startsto2 = 0;
int counter = 0;
int counte2 = 0;
int dialcount = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  startstop = digitalRead(6);
  counter = digitalRead(7);
  if (counter != counte2){
    count++;
  }
  if (startstop != startsto2) {
    if (dialcount == 4) {
      Serial.println(count/2);
      dialcount = 0;
      count = 0;
    }
    
    dialcount++;
  }
  
  delay(10);
  counte2 = counter;
  startsto2 = startstop;
}
