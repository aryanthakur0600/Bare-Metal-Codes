void setup() {
 DDRB=32;
}

void loop() {
  volatile byte* mitch=0x25;
  *mitch=32;
 // PORTB=32;    
  for(long i=0;i<1000000;i++){*mitch=32;}  
 *mitch=0;                   
  //PORTB=0;     
  for(long i=0;i<1000000;i++){*mitch=0;}                        
}
