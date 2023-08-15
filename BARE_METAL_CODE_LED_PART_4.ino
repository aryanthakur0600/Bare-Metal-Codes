
#define mitchb *((volatile byte*)0x25)
#define mitchdirb *((volatile byte*)0x24)
void setup()
{
mitchdirb =32; 
}

void loop()
{
mitchb =32; 
  for(long i=0;i<4000000;i++){mitchb=32;}  
mitchb=0;     
  for(long i=0;i<1000000;i++){mitchb=0;}                    
}
