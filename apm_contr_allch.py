import serial
import time
import multiprocessing

ser=serial.Serial("/dev/ttyUSB0", 9600)



"""ch1=raw_input('chan1')
ch2=raw_input('chan2')
ch3=raw_input('chan3')
ch4=raw_input('chan4')"""
ch1='032'
ch2='032'
ch3='032'
ch4='032'
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
	time.sleep(.004)
	ser.write(ch1[0])	
	time.sleep(.004)  
	ser.write(ch1[1])
	time.sleep(.004) 
	ser.write(ch1[2])
	time.sleep(.004) 
	ser.write(ch2[0])
	time.sleep(.004) 
	ser.write(ch2[1])
	time.sleep(.004) 
	ser.write(ch2[2])
	time.sleep(.004) 
	ser.write(ch3[0])
	time.sleep(.004) 
	ser.write(ch3[1])
	time.sleep(.004) 
	ser.write(ch3[2])
	time.sleep(.004) 
	ser.write(ch4[0])
	time.sleep(.004) 
	ser.write(ch4[1])
	time.sleep(.004) 
	ser.write(ch4[2])

	"""time.sleep(.004)
	ser.write('2')
	time.sleep(.004)
	ser.write('3')
	time.sleep(.004)
	ser.write('4')
	time.sleep(.004)
	ser.write('5')
	time.sleep(.002)
	ser.write('6')
	time.sleep(.002)
	ser.write('7')
	time.sleep(.002)
	ser.write('8')	
	time.sleep(.002)
	ser.write('9')	
	time.sleep(.002)
	ser.write('2')	
	time.sleep(.002)
	ser.write('3')	
	time.sleep(.002)
	ser.write('4')
	time.sleep(.002)
	"""
