import serial
portNumber = 10
ser = serial.Serial(portNumber)
print ser.name
# send "Hello" message
ser.write("hello abhishek")
# read 100 bits of data
m = ser.read(100)
while m=="":
	m = ser.read(100)
else:
	print m
ser.close()
