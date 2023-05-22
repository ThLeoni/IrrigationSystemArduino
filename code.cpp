// BY THATA & JOJO
//Ports & Constants

int XPOLATIRY = 7;
int YPOLATIRY = 4;
int PUMP = 5;
int SPEED = 210;
int STOP= 0;
void setup( ) //Runs at the start
{
  
//Starts the ports mode to be output only
pinMode(XPOLARITY,OUTPUT);
pinMode(YPOLARITY,OUTPUT);
pinMode(PUMP,OUTPUT);
Serial.begin(9600);
//Makes the polarity of the motor be clockwise
digitalWrite(XPOLARITY,HIGH);
digitalWrite(YPOLARITY,LOW);
}
void On( )
{
analogWrite(PUMP,SPEED); //Starts the motor at a constant speed
}
void Off( )
{
analogWrite(PUMP,STOP); //Stops the motor
}
void loop( ) //Stays in cicle
{
int state= Serial.read();
if (state == 'A'){ // If the button is on
On();
delay(2);
}
if (state == 'B'){ // If the button is off
Off();
delay(2);
}
}
