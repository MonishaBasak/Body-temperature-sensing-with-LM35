#define LM35 A0

void setup() {
 Serial.begin (9600); // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 float lmvalue = analogRead(LM35);
 float tempr = (lmvalue * 0.48825) ;
 Serial.println(tempr); 
 delay(1000);
}
