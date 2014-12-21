#include <SoftwareSerial.h>
//SoftwareSerial myser(10,11);
int ch1,ch2,ch3,ch4,ch11, ch12, ch13, ch21, ch22, ch23, ch31, ch32, ch33, ch41, ch42, ch43,a;
#include <Servo.h>
Servo myserv1;
Servo myserv2;
Servo myserv3;
Servo myserv4;


void setup()
{Serial.begin(9600);
//Serial.begin(9600);
myserv1.attach(9);
myserv2.attach(10);
myserv3.attach(11);
myserv4.attach(12);

}

void loop()
{while(!Serial.available());
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
    int angle = map(ch1, 0, 100, 0, 100);
  myserv1.write(angle);  
  ch2=ch21*100+ch22*10+ch23;
     angle = map(ch2, 0, 100, 0, 100);
  myserv2.write(angle);  
  ch3=ch31*100+ch32*10+ch33;
     angle = map(ch3, 0, 100, 0, 100);
  myserv3.write(angle);  
  ch4=ch41*100+ch42*10+ch43;
     angle = map(ch4, 0, 100, 0, 100);
  myserv4.write(angle);  
  
  
/*Serial.write(ch11);
Serial.write(ch12);
Serial.write(ch13);
Serial.println("sera");
Serial.write(ch21);
Serial.write(ch22);
Serial.write(ch23);
Serial.println("serb");
Serial.write(ch31);
Serial.write(ch32);
Serial.write(ch33);
Serial.println("dww");
Serial.write(ch41);
Serial.write(ch42);
Serial.write(ch43);*/
Serial.write(ch1);
Serial.write(ch2);
Serial.write(ch3);
Serial.write(ch4);
}

}
