#include <SoftwareSerial.h>
SoftwareSerial myser(10,11);
int ch1,ch2,ch3,ch4,a;
char ch11, ch12, ch13, ch21, ch22, ch23, ch31, ch32, ch33, ch41, ch42, ch43;
int ch11i, ch12i, ch13i, ch21i, ch22i, ch23i, ch31i, ch32i, ch33i, ch41i, ch42i, ch43i;
#include <Servo.h>
Servo myserv1;
Servo myserv2;
Servo myserv3;
Servo myserv4;


void setup()
{myser.begin(9600);
Serial.begin(9600);
myserv1.attach(9);
myserv2.attach(13);
myserv3.attach(8);
myserv4.attach(12);

}

void loop()
{while(!myser.available());
a=0;
if (myser.read()=='#')
{
while (myser.read()=='#');
while (!myser.available());
ch11=myser.read();
ch11i=(int)ch11;
while (!myser.available());
ch12=myser.read();
ch12i=(int)ch12;
while (!myser.available());
ch13=myser.read();
ch13i=(int)ch13;
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
  ch1=(ch11i-48)*100+(ch12i-48)*10+(ch13i-48);
    int angle = map(ch1, 0, 100, 0, 100);
  myserv1.write(angle);  
  ch2=(ch21-48)*100+(ch22-48)*10+(ch23-48);
     angle = map(ch2, 0, 100, 0, 100);
  myserv2.write(angle);  
  ch3=(ch31-48)*100+(ch32-48)*10+(ch33-48);
     angle = map(ch3, 0, 100, 0, 100);
  myserv3.write(angle);  
  ch4=(ch41-48)*100+(ch42-48)*10+(ch43-48);
     angle = map(ch4, 0, 100, 0, 100);
  myserv4.write(angle);  
  
  
/*myser.write(ch11);
myser.write(ch12);
myser.write(ch13);
myser.println("sera");
myser.write(ch21);
myser.write(ch22);
myser.write(ch23);
myser.println("serb");
myser.write(ch31);
myser.write(ch32);
myser.write(ch33);
myser.println("dww");
myser.write(ch41);
myser.write(ch42);
myser.write(ch43);*/
Serial.print(ch1);
Serial.print(ch2);
Serial.print(ch3);
Serial.print(ch4);
}

}
