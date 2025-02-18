int b = 11 ;
int bb = 10;
long cmde = 0;
long cmd = 0;
long cmi = 0;
long cmiz = 0;
long hola(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  delay(.002);
  digitalWrite(triggerPin, 0);
  delay(.002);
  digitalWrite(triggerPin, 1);
  delay(.0025);
  digitalWrite(triggerPin, 0);
  pinMode(echoPin, INPUT);
  return (pulseIn(echoPin, HIGH)*0.01723);
  
}

void setup()
{
 pinMode(b, OUTPUT);
   pinMode(bb, OUTPUT);
   //pinMode(bd, OUTPUT);
   //pinMode(bi, OUTPUT);
  Serial.begin(9600);
   digitalWrite(b , LOW);
   digitalWrite(bb , LOW);
     //digitalWrite(bd , LOW);
   //digitalWrite(bi , LOW);
}

void loop()
{
  cmde = hola(2, 3);
 Serial.print("d1 ");
    Serial.println(cmde);
  delay(.0001);
  
   cmd = hola(4, 5);
 Serial.print("d2 ");
    Serial.println(cmd);
  delay(.0001);
   
  cmi = hola(6, 7);
 Serial.print("I1 ");
    Serial.println(cmi);
  delay(.0001);
   
  cmiz = hola(8, 9);
 Serial.print("I2 ");
    Serial.println(cmiz);
  delay(.0001);
  
   if (cmi < 40 ) //si la distancia es menor a 5 enciende el b
  {
  digitalWrite(b , HIGH);   // poner el Pin en HIGH
  }
  else {
  digitalWrite(b , LOW);
  }
   if (cmd< 40 ) //si la distancia es menor a 5 enciende el b

  digitalWrite(b , HIGH);   // poner el Pin en HIGH
  }
  else {
  digitalWrite(b , LOW);
  }

}
}