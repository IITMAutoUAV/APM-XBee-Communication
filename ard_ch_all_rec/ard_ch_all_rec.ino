#include <SoftwareSerial.h>
SoftwareSerial myser(10,11);
int ch11, ch12, ch13, ch21, ch22, ch23, ch31, ch32, ch33, ch41, ch42, ch43,a;

void setup()
{Serial.begin(9600);
myser.begin(9600);

}

void loop()
{while(!myser.available());
a=0;

if (myser.read()=='#')
{while (myser.read()=='#');
 while (!myser.available());
 ch11=myser.read();
  while (!myser.available());
 ch12=myser.read();
 while (!myser.available());
 ch13=myser.read();
 while (!myser.available());
 ch21=myser.read();
 while (!myser.available());
 ch22=myser.read();
 while (!myser.available());
 ch23=myser.read();
 while (!myser.available());
 ch31=myser.read();
 while (!myser.available());
 ch32=myser.read();
 while (!myser.available());
 ch33=myser.read();
 while (!myser.available());
 ch41=myser.read();
 while (!myser.available());
 ch42=myser.read();
 while (!myser.available());
 ch43=myser.read();
 while (!myser.available());
 a=1;
}

if (a==1)
{
Serial.write(ch11);
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
Serial.write(ch43);
}

}
