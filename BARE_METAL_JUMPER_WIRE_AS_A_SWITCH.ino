#define ddrb *((volatile byte*)0x24)
#define ddrb2 *((volatile byte*)0x24)
#define portb *((volatile byte*)0x25)
void setup()
{
  ddrb=0;
  ddrb2=32;
}
void loop()
{
  if(ddrb==1)
  {
    portb=32;
  }
  if(ddrb==0)
  {
    portb=0;
  }
}
