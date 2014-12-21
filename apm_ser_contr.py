import serial
import time
import multiprocessing
ser=serial.Serial("/dev/ttyUSB0", 9600)


ch1=0
ch2=0
ch3=0
ch4=0
ch1=input('chan1')
ch2=input('chan2')
ch3=input('chan3')
ch4=input('chan4')
def foo(n): 
	ser.write("#")

while 1:
   
	if __name__ == '__main__':
    # Start foo as a process
    		p = multiprocessing.Process(target=foo, name="Foo", args=(10,))
    		p.start()

    # Wait 10 seconds for foo
    		time.sleep(.005)

    # Terminate foo
    		p.terminate()

    # Cleanup
    		p.join()
	time.sleep(.004) #50ms 
		

ch1s=str(ch1)
ch2s=str(ch2)
ch3s=str(ch3)
ch4s=str(ch4)
while len(ch1s)<3:
        ch1s="0"+ch1s
while len(ch2s)<3:
        ch2s="0"+ch2s
while len(ch3s)<3:
        ch3s="0"+ch3s
while len(ch4s)<3:
        ch4s="0"+ch4s
for i,c in ch1s:
        ser.write(c)
        time.sleep(.002)
for i,c in ch2s:
        ser.write(c)
        time.sleep(.002)
for i,c in ch3s:
        ser.write(c)
        time.sleep(.002)
for i,c in ch4s:
        ser.write(c)
        time.sleep(.002)
