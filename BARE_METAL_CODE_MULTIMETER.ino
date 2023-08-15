int led =8;
int r1=22000;
float vin =5;
#define ddrb *((volatile byte*)0x24)
#define ddrc *((volatile byte*)0x00)
#define portb *((volatile byte*)0x25)
#define portc *((volatile byte*)0b001001)
#define debug 1
#if debug == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#else
#define debug(x)
#define debugln(x) 
#endif
void setup() {
  // put your setup code here, to run once:
  ddrb = 1;
  Serial.begin(9600);
}

void loop()
{

    portb=1;
    double sensorValue = portc;
    portc=0;
    debug(sensorValue);
    debugln();
    float vout = (vin*sensorValue)/1023;


   debug("vout =");// prins the text "Voltage ="
   debug(vout);
   debugln();
   float r2 = -(r1 * vout) / (vin - vout);
   debugln("R: ");
   debugln(r2);
   float i= vout/(r1+r2);
   debug("i=");
   debugln(i);
   debugln();
  
  
  
  delay(6000);
  // put your main code here, to run repeatedly:

}
