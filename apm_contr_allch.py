import serial
import time
import multiprocessing
ser=serial.Serial("/dev/ttyUSB0", 9600)


ch1=0
ch2=0
ch3=0
ch4=0
"""ch1=input('chan1')
ch2=input('chan2')
ch3=input('chan3')
ch4=input('chan4')"""
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
	ser.write('123')
	#ser.write('%d'% 12)
	time.sleep(.004)
	ser.write('456')
	time.sleep(.004)
	ser.write('789')
	time.sleep(.004)
	ser.write('654')
	time.sleep(.004)
	"""ser.write('5')
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
	time.sleep(.002)"""
	#ser.write('273')
	#time.sleep(.002)
	#ser.write('964')
	#time.sleep(.002)
	"""ser.write('%c'% 14)
	time.sleep(.1)
	ser.write('%c'% 15)
	time.sleep(.1)

"""
