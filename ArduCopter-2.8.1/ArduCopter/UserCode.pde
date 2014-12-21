// agmatthews USERHOOKS

void userhook_init()
{
    // put your initialisation code here
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

myservo1.attach(5);
myservo2.attach(5);
myservo3.attach(5);
myservo4.attach(5);

}

void userhook_50Hz()
{

   while(!Serial.available());
a=0;

if (Serial.read()=='#')
{while (Serial.read()=='#');
 while (!Serial.available());
 ch11=Serial.read();
  while (!Serial.available());
 ch12=Serial.read();
 while (!Serial.available());
 ch13=Serial.read();
 while (!Serial.available());
 ch21=Serial.read();
 while (!Serial.available());
 ch22=Serial.read();
 while (!Serial.available());
 ch23=Serial.read();
 while (!Serial.available());
 ch31=Serial.read();
 while (!Serial.available());
 ch32=Serial.read();
 while (!Serial.available());
 ch33=Serial.read();
 while (!Serial.available());
 ch41=Serial.read();
 while (!Serial.available());
 ch42=Serial.read();
 while (!Serial.available());
 ch43=Serial.read();
 while (!Serial.available());
 a=1;
}

if (a==1)
{
  ch1=ch11*100+ch12*10+ch13;
  ch2=ch21*100+ch22*10+ch23;
  ch3=ch31*100+ch32*10+ch33;
  ch4=ch41*100+ch42*10+ch43;
int ang=map(ch1,0,255,0,100);
myservo1.write(ang);
ang=map(ch2,0,255,0,100);
myservo2.write(ang);
ang=map(ch3,0,255,0,100);
myservo3.write(ang);
ang=map(ch4,0,255,0,100);
myservo4.write(ang);
/*Serial.write(ch1);
Serial.write(ch2);
Serial.write(ch3);
Serial.write(ch4);*/
}

} // put your 50Hz code here


}
