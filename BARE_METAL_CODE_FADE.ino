#define ddrb *((volatile byte*)0x24)
#define portb *((volatile byte*)0x25)
int brightness=0;
void setup() 
{
 ddrb=2;
}

void loop()
{
for(brightness=0;brightness<=255;brightness+=10)
{
  portb=2;
  for(long i=0;i<100000;i++){portb=2;}
}
for(brightness=255;brightness>=0;brightness-=10)
{
  portb=2;
  for(long i=0;i<100000;i++){portb=0;}
}
}
  
  // put your main code here, to run repeatedly:
