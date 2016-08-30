void setup()
{
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);// put your setup code here, to run once:
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);

 digitalWrite(9,1);
}

void loop()
{
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,1);// put your main code here, to run repeatedly:
  delay(10000);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,0);
  delay(10000);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,1);
  delay(10000);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,0);
  delay(10000);
  
}
