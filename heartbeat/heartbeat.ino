/* heartbeat
 *
 * output how many seconds have elapsed every second
 *
 */

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  //Serial.println("Hello, world!");
}

void loop() {
  //turn on
  delay(1000);
  digitalWrite(13, HIGH);
  long time = millis();
  Serial.println(time);
  Serial.print(time/1000);
  Serial.println(" sec have elapsed");
  
  
  //turn off
  delay(1000);
  digitalWrite(13, LOW);
  time = millis();
  Serial.println(time);
  Serial.print(time/1000);
  Serial.println(" sec have elapsed");
}
